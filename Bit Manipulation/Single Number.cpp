//Single Number
//Here is the link 
//     https://leetcode.com/problems/single-number/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums)mp[i]++;
        int k=0;
        for(auto i:mp)
        {
            if(i.second==1)
            k=i.first;
        }
        return k;
    }
};