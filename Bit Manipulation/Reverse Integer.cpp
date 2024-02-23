//Reverse Integer 
//Here is the link
//     https://leetcode.com/problems/reverse-integer/description/
class Solution {
public:
    int getSum(int a, int b) {
       int x, y;
    do {
        x = a & b; 
        y = a ^ b;  
        a = x << 1;
        b = y;
    } while (x);
    return y;
    }
};