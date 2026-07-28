// Last updated: 28/7/2026, 12:43:30 pm
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int>mp;
5        int diff;
6        for(int i=0;i<nums.size();i++){
7            diff=target-nums[i];
8            if(mp.find(diff)!=mp.end()){
9                return{mp[diff],i};
10            }
11            mp[nums[i]]=i;
12        }
13        return{-1,-1};
14        
15    }
16};