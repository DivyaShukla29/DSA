// my initial thought process was to take two pointers one pointing at the beginning and other at the end and then to check if the string is of even length or not
bool isPalindrome (string str){
    int n = str.length ();
    int start = 0;
    int end = n-1;
    if (n%2==0){
        while (start <n/2){
            if (str[start] == str [end]){
                start++;
                end--;
                continue;
            }
            else {
                return false;
            }
        }
    }
    else {
        while (start < (n/2)-1){
            if (str[start] == str[end]){
                start++;
                end--;
                continue;
            }
            else {
                return false;
            }
        }
        
    }
    return true;
  
} // Takes theta  n time not O(n).

// Better approach - simply take two pointers one pointing to the beginning and other to the end of the array and then do start ++ and end-- till start < end . 
// covers both the cases for even and odd length strings
bool isPalindrome (string str){
    int n = str.length ();
    int start = 0;
    int end = n-1;
    while (start<end){
        if (str[start]==str[end]){
            start++;
            end--;
        }
        else {
            return false;
        }
    }
    return true;
}

// leetcode problem valid palindrome - https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
      string t = "";
      for (char x: s){ // for each loop 
        if (isalnum(x)){ // isalnum(x) function checks if the character is alphanumeric or not 
            t+= tolower(x); // detailed explaination in notebook
        }
      }
      int start =0;
      int end= t.length()-1;
      while (start<end){
        if (t[start]==t[end]){
            start++;
            end--;
        }
        else {
            return false;
        }
      }
      return true;
    }
    

};
