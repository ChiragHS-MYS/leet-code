// Last updated: 15/7/2026, 12:10:47 pm
1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        vector<vector<int>> dp(m,vector<int>(n,-1));
5        for(int i=0;i<m;i++){
6            dp[i][0]=1;
7        }
8        for(int j=0;j<n;j++){
9            dp[0][j]=1;
10        }
11        for(int i=1;i<m;i++){
12            for(int j=1;j<n;j++){
13                dp[i][j]=dp[i-1][j]+dp[i][j-1];
14            }
15        }
16        return dp[m-1][n-1];
17    }
18};