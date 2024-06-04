// native solution with time complexity of O(NlogN)
class Solution {
public:
    bool isAnagram(string s, string t) {
     string res1, res2;
     sort(s.begin(), s.end());
    sort (t.begin(), t.end()); 
    
    return s==t;
    }
};

// effective solution with time complexity of O(N) where n is the length of the freq array

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        int freq [26]={0};
        for (int i =0; i<s.length(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for (int i =0; i<26; i++){
            if (freq[i] != 0){
                return false;
            }
            
        }
        return true;
    }
};
