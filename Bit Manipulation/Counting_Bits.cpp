//Counting Bits
//Here is the link 
//     https://leetcode.com/problems/counting-bits/description/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            int k=i;
            int cnt=0;
            while(k)
            {
                cnt+=(k%2==1);
                k=k>>1;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};