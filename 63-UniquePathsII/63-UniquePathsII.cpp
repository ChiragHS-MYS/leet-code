// Last updated: 15/7/2026, 12:23:24 pm
1class Solution {
2public:
3    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
4
5        int m = obstacleGrid.size();
6        int n = obstacleGrid[0].size();
7
8        vector<vector<int>> dp(m, vector<int>(n, 0));
9
10        // First column
11        for(int i=0;i<m;i++){
12            if(obstacleGrid[i][0]==1)
13                break;
14            dp[i][0]=1;
15        }
16
17        // First row
18        for(int j=0;j<n;j++){
19            if(obstacleGrid[0][j]==1)
20                break;
21            dp[0][j]=1;
22        }
23
24        for(int i=1;i<m;i++){
25            for(int j=1;j<n;j++){
26
27                if(obstacleGrid[i][j]==0){
28                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
29                }
30            }
31        }
32
33        return dp[m-1][n-1];
34    }
35};