//Valid Palindrome 
//Here is the link 
//     https://leetcode.com/problems/valid-palindrome/description/
class Solution {
public:
    bool isPalindrome(string s) {
     
        string s1;
        for (char c : s) {
            if (isalnum(c)) { 
                s1 += tolower(c);
            }
        }  
        string t = s1;
        reverse(t.begin(), t.end());
        return t == s1;
    }
};