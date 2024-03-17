//Palindromic Substrings
//Here is the link 
//       https://leetcode.com/problems/palindromic-substrings/
class Solution {
public:
    bool check(string &s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])return 0;
            i++,j--;
        }
        return 1;
    }
    int countSubstrings(string s) {
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(check(s,i,j))cnt++;
            }
        }
        return cnt;
    }
};