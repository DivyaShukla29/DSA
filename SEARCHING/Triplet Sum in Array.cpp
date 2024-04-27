// finding 3 elements from the array whose sum is same as the give sum
// naive solution time complexity O(N^3)
// optimised solution O(N^2) uses two pointer approach by traversing through the array and finding the pair of sum in the remaining array.

bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A+n);
         int sum =0;
    for (int i =0; i<n; i++){
        sum = X-A[i];
        int low = i+1; 
        int high = n-1;
        while(low<high){
           if (A[low]+A[high]>sum){
               high--;
           }
           else if(A[low]+A[high]<sum){
               low++;
           }
           else if (A[low]+A[high] == sum ){
               
               return true;
           }
        }
    }
    return false;
    }  // can also be seperated into two different functions as well.

//Similar approach is applied for leetcode 3Sum problem

vector<vector<int>> threeSum(vector<int>& nums) {
        sort (nums.begin(), nums.end());
            
        int sum =0;
        vector <vector <int>> ans;
        for (int i =0; i<nums.size(); i++){
            if (i>0 && nums[i]==nums[i-1]){
                continue;
            }
            sum = 0-nums[i];
            int low = i+1; 
        int high = nums.size()-1;
        while(low<high){
           if (nums[low]+nums[high]>sum){
               high--;
           }
           else if(nums[low]+nums[high]<sum){
               low++;
           }
           else if (nums[low]+nums[high] == sum ){
            vector <int> add;
            ans.push_back({nums[i],nums[low],nums[high]});
            while (low<high && nums[low]==nums[low+1]) low++;
            while (low<high && nums[high]==nums[high-1]) high--;  // to skip duplicates but will end on a duplicate therefor we incremnet both the pointers later
              low++; // if there are no duplicates it is necessary to move shift to the next elements to avoid duplicate triplets
              high--;
           }
        }
    }
    return ans;
    }
