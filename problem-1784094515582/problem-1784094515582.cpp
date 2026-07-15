// Last updated: 15/7/2026, 11:18:35 am
1class Solution {
2public:
3    int findpath(int m,int n ,int i,int j,vector<vector<int>>&dp){
4        if(i==m-1 || j==n-1){
5            return 1;
6        }
7        if(i>m-1 || j >n-1){
8            return 0;
9        }
10        if(dp[i][j] !=-1){
11            return dp[i][j];
12        }
13        int right=findpath(m,n,i+1,j,dp);
14        int down=findpath(m,n,i,j+1,dp);
15        return(dp[i][j]=right +down);
16    }
17    int uniquePaths(int m, int n) {
18        vector<vector<int>> dp(m, vector<int>(n, -1));
19        return findpath(m,n,0,0,dp);
20        
21    }
22};