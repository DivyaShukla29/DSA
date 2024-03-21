//optimised approach
int search(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size()-1;
        int mid;
        while (low<= high){
            mid = low + (high - low)/2;
            if (nums[mid]==target){
              return mid;
            }
            else if (nums[mid]>=nums[low]){      // left half is sorted
                if (target>= nums[low] && target< nums[mid]){ // checking if target can potentially lie in the second half or not
                high = mid-1;
            }
            else {
                low = mid+1;
            }
            }
            else {  // right half is sorted
            if (target<=nums[high] && target > nums[mid]){  // checking if the target can potentially lie in the second half or not
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        }
        return -1;
    }
