// Last updated: 28/7/2026, 3:08:37 pm
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int ,int >mp;
5        for(int i=0;i<nums.size();i++){
6            mp[nums[i]]++;
7        }
8        priority_queue<pair<int,int>>pq;
9        for(auto it:mp){
10            pq.push({it.second,it.first});
11        }
12        vector<int>res;
13        while(k--){
14            res.push_back(pq.top().second);
15            pq.pop();
16        }
17        return res;
18
19    
20    }
21};