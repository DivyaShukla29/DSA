// in this question it is very necessary to check conditions before hand
// first approach checks the corner condition inside the while loop only
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int low=0;
    int high = nums.size()-1;
    while (low<=high){
        int mid= (low+high)/2;
        if((mid==0|| nums[mid-1]<nums[mid]) && (mid==nums.size()-1 || nums[mid+1]<nums[mid])){ // checking for the corner conditions
            return mid;
        }
        else if (mid >0 && nums[mid-1]>nums[mid]){ // checking that the current element is not the corner element first then comparing with nums[mid-1]
           high=mid-1;
        }
        else{
            low = mid+1;
        }
        
    }
    return -1;
    }

};

// second approach checks for the corner conditions out of the loop

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 1, high = nums.size()-2;
        int peak =-1;
        if (nums.size() == 1){
           return 0;
        }
        if (nums[0]> nums[1]){ // checking for the corner conditions seperately before entering the loop
            return 0;
        }

        if (nums[n-1]> nums[n-2]){
            return n-1; 
        }
      while (low<=high){
         int mid= low +(high - low)/2;
          if (nums[mid-1]<nums[mid]&& nums[mid+1]<nums[mid] ){
              peak = mid;
              break;
          }
          
          else if (nums[mid] > nums[mid +1]) {
           high  = mid -1;
          }
          else {
              low = mid+1;

          }
      }

          return peak;
    }
};
