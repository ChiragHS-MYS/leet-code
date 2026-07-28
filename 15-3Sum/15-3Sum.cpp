// Last updated: 28/7/2026, 1:10:54 pm
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int low,high,sum;
6        vector<vector<int>>res;
7        for(int i=0;i<nums.size();i++){
8            if(i>0 && nums[i]==nums[i-1]){
9                continue;
10            }
11            low=i+1;
12            high=nums.size()-1;
13            while(low<high){
14                sum=nums[i]+nums[low]+nums[high];
15                if(sum==0){
16                    res.push_back({nums[i],nums[low],nums[high]});
17                    while(low<high && nums[low]==nums[low+1])low++;
18                    while(low<high && nums[high]==nums[high-1])high--;
19                    low++;
20                    high--;
21                }
22                else if(sum <0){
23                    low++;
24                }
25                else{
26                    high--;
27                }
28            }
29
30        }
31           return res;
32    }
33};