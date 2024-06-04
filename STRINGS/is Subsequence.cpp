// the approach to solving this problem is to traverse both the strings together. if the characters match go to the next character in both the string otherwise only 
// iterate over the original string . If the string to be checked gets iterated over completely then the string is a subsequence
// my approach is same but the coding implementation is a little difficult to understand
// here s is the string that has to be checked for subsequece
// time complexity is O(n+m)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.length ();
        int j =0;
        for (int i =0; i<s.length(); i++){
           
         while (j<n)  {
            if (t[j]!=s[i])
            {
                j++;
            }
               else {
                break;
               }
            }
            if (j>=n){
                return false;
            }
            j++;
        }
        return true;
    }
};

// approach is same but the way the code is structured is more easier to understand

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i =0; 
        int j=0;
        if (s.length ()==0){
            return true;
        }
     while ((i<s.length()) && (j<t.length())){
        if (s[i]==t[j]){
            i++;
            j++;
        }
        else {
            j++;
        }
     }
     if (i == s.length()){   // this means that the entire subsequence string has been traversed and there was a match 
        return true;
     }
     
    return false;
    }
};
