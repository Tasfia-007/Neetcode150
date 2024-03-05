//House Robber
//Here is the link 
//      https://leetcode.com/problems/house-robber/submissions/
class Solution {
public:
    int rob(vector<int>& nums) {
        int k1=0,k2=0;
        for(int i=0;i<nums.size();i++)
        {
            int d=max(k1+nums[i],k2);
            k1=k2;
            k2=d;
        }
        return max(k1,k2);
    }
};