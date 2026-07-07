// Last updated: 7/7/2026, 3:12:59 pm
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        int diff;
6        for(int i=0;i<nums.size();i++){
7            diff=target-nums[i];
8            if(mp.find(diff)!=mp.end()){
9                return{i,mp[diff]};
10            }
11            mp[nums[i]]=i;
12        }
13        return {};
14        
15    }
16};