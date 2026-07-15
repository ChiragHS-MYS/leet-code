// Last updated: 15/7/2026, 1:59:06 pm
1class Solution {
2public:
3
4    int solve(vector<vector<int>>& grid, int i, int j,
5              vector<vector<int>>& dp) {
6
7        int m = grid.size();
8        int n = grid[0].size();
9
10        if(i >= m || j >= n)
11            return INT_MAX;
12
13        if(i == m-1 && j == n-1)
14            return grid[i][j];
15
16        if(dp[i][j] != -1)
17            return dp[i][j];
18
19        int down = solve(grid, i+1, j, dp);
20        int right = solve(grid, i, j+1, dp);
21
22        return dp[i][j] = grid[i][j] + min(down, right);
23    }
24
25    int minPathSum(vector<vector<int>>& grid) {
26
27        int m = grid.size();
28        int n = grid[0].size();
29
30        vector<vector<int>> dp(m, vector<int>(n, -1));
31
32        return solve(grid, 0, 0, dp);
33
34    }
35};