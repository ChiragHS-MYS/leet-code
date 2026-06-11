// Last updated: 11/6/2026, 10:21:35 pm
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        unordered_map<int,int>mp;
5        for(int i=0;i<numbers.size();i++){
6            int value=target-numbers[i];
7            if(mp.find(value)!=mp.end()){
8                return {mp[value]+1,i+1};
9            }
10            mp[numbers[i]]=i;
11        }
12        return {};
13    }
14};