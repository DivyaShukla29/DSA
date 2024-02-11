//https://leetcode.com/problems/number-of-subarrays-that-match-a-pattern-i/description/
class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size(); 
        int m = pattern.size();
        int res=0, count=0;
        for (int i =0; i<n-m; i++){
            for (int k=0;k<m; k++){
                if (pattern[k]==1 && nums[i+k+1]<=nums[i+k]){
                        break;                   
                }
                else if(pattern[k]==-1 && nums[i+k+1]>=nums[i+k]){
                   break;
                }
                else if (pattern[k]==0 && nums[i+k+1]!=nums[i+k]){
                    break;
                }
               count++;
                }
            if (count==m){
             res++;}
            count=0;
            }
        return res;
    }
};
// less time complexity
