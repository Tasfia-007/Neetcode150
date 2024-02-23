//Number of 1 Bits
//Here is the link 
//     https://leetcode.com/problems/number-of-1-bits/description/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n)
        {
            cnt+=(n%2==1);
            n=n>>1;
        }
        return cnt;
    }
};