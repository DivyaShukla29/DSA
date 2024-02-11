//https://leetcode.com/problems/longest-common-prefix/description/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string minn=strs[0];
        for (int i =1; i<strs.size(); i++){
            minn = min(strs[i], minn);
        }
        int n = minn.length();
     char curr;
        string res;
        for (int i =0; i<n; i++){
            curr=strs[0][i];
            for(int j = 1; j<strs.size(); j++){
                if (strs[j][i]!=curr){
                   return res;
                }
            }
            res.push_back(curr);           
        }
    return res;
    }
};
