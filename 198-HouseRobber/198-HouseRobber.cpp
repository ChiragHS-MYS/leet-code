// Last updated: 15/7/2026, 2:25:33 pm
1class Solution {
2public:
3    int solve(string word1,string word2,int i,int j,vector<vector<int>>&dp){
4        //delete the remaining elements
5        if(i==word1.size()){
6            return word2.size()-j;
7        }
8        // if add rem letters in word2 as for insert 1
9        if(j==word2.size()){
10            return word1.size()-i;
11        }
12        if(dp[i][j] != -1)
13            return dp[i][j];
14
15        if(word1[i] == word2[j])
16            return dp[i][j] = solve(word1, word2, i + 1, j + 1, dp);
17
18        int insert = 1 + solve(word1, word2, i, j + 1, dp);
19
20        int del = 1 + solve(word1, word2, i + 1, j, dp);
21
22        int replace = 1 + solve(word1, word2, i + 1, j + 1, dp);
23
24        return dp[i][j] = min(insert, min(del, replace));
25    }
26
27    int minDistance(string word1, string word2) {
28
29        vector<vector<int>> dp(word1.size(),
30                               vector<int>(word2.size(), -1));
31
32        return solve(word1, word2, 0, 0, dp);
33    }
34};