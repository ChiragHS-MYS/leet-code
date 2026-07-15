// Last updated: 15/7/2026, 12:35:57 pm
1class Solution {
2public:
3    int findmaxamount(vector<int>& nums,int index,vector<int>&dp){
4        if(index>=nums.size()){
5            return 0;
6        }
7        if(dp[index]!=-1){
8            return dp[index];
9        }
10        int take=nums[index]+findmaxamount(nums,index+2,dp);
11        int nottake=findmaxamount(nums,index+1,dp);
12        dp[index]=max(take,nottake);
13        return dp[index];
14    }
15    int rob(vector<int>& nums) {
16        vector<int> dp(nums.size(), -1);
17        return findmaxamount(nums,0,dp);
18        
19    }
20};