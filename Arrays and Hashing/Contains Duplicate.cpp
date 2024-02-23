//Contains Duplicate 
//Here is the link 
//     https://leetcode.com/problems/contains-duplicate/

class Solution {
    typedef long long ll;
public:
    bool containsDuplicate(vector<int>& nums) {
        map<ll,ll>mp;
        ll n=nums.size();
        for(auto i:nums)mp[i]++;
        if(mp.size()!=nums.size())return true;
        return false;
    } 
};