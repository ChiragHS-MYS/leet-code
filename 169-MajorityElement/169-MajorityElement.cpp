// Last updated: 8/7/2026, 8:49:35 pm
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int,int>mp;
5        for(int i:nums){
6            mp[i]++;
7            if(mp[i]>(nums.size()/2))
8                return i;
9        }
10        return 0;
11    }
12};