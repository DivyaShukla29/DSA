// we take two pointers pointing to the end of the array respectively and move them if the sum is greater or lesser than the target
// O(N) time whereas the naive approach takes O(N^2) time
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0; 
        int j=nums.size()-1;
       vector <int> res;
        while (i<j){
            if (nums[i]+nums[j]==target){
                res.push_back(i);
                res.push_back(j);
                break;
            }
            else if (nums[i]+nums[j]>target){
                j=j-1;
            }
            else {
                i=i+1;
            }
        }
        return res;
    }
};
