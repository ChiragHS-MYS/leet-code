// Last updated: 15/7/2026, 12:43:26 pm
1class Solution {
2public:
3    int rob(vector<int>& nums) {
4
5        int n = nums.size();
6
7        if(n == 1)
8            return nums[0];
9
10        vector<int> dp(n + 2, 0);
11
12        for(int i = n - 1; i >= 0; i--) {
13            dp[i] = max(nums[i] + dp[i + 2],
14                        dp[i + 1]);
15        }
16
17        return dp[0];
18    }
19};