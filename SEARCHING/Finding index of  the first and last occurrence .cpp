// first method
vector<int> searchRange(vector<int>& nums, int target) {
        int low =0; 
        int high = nums.size()-1;
        int n = nums.size();
        vector <int> ans;
   
        if (nums.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }

        while (low<=high){
            int mid = (low+high)/2;
       if (nums[mid]> target){
                high = mid-1;
            }
            else if (nums[mid] < target) {
                low = mid+1;
            }
            else{
                if (mid ==0 || nums[mid-1]!= nums[mid]){    // checking if it is the first element
                    ans.push_back(mid);
                    break;
                }
                else{
                    high =mid-1;
                }
            }

        }
       low =0; high =n-1;
        while (low<=high){
            int mid = (low+high)/2;
       if (nums[mid]> target){
                high = mid-1;
            }
            else if(nums[mid] < target) {
                low = mid+1;
            }
            else{
                if (mid == n-1 || nums[mid+1]!= nums[mid]){ // checking if it is the last element
                    ans.push_back(mid);
                    break;
                }
                else{
                    low =mid+1;
                }
            }

        }
        if (ans.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }   
// 2nd appraoch . Here we take two variables that keep the value of mid when arr[mid] = target element
// if arr[mid] == target then we enter the other half of the loop to check if the target exists in that half or not
  vector<int> searchRange(vector<int>& nums, int target) {
        vector <int>v;
        int start=0, end=nums.size()-1;
        int si=-1;
        int ei=-1;
       while(start<=end){
          int mid = (start +end)/2;
           if (nums[mid]==target){
             si = mid;
             end = mid-1;
           }
           else if (nums[mid]<target){
               start = mid+1;
           }
           else {
               end = mid -1;
           }
       }
     
        
    
    start=0, end= nums.size()-1;
    while(start<=end){
          int mid = (start +end)/2;
           if (nums[mid]==target){
             ei = mid;
             start = mid+1;
           }
           else if (nums[mid]<target){
               start = mid+1;
           }
           else {
               end = mid -1;
           }
       }
     v.push_back(si);
     v.push_back(ei);
     return v;
        
    }
// same approach is applied for counting no of 1s in a sorted binary array
