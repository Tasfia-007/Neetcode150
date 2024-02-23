//Pow(x,n)
//Here is the link 
//     https://leetcode.com/problems/powx-n/description/
class Solution {
public:
    double myPow(double x, int n) {
     double po=1;
    if(n<0)
    {
        x=1/x;
    }
    long num=labs(n);
    double pow=1;
    while(num)
    {
        if(num&1)
        {
            pow*=x;
        }
        x*=x;
        num>>=1;
    }return pow;
    }
};