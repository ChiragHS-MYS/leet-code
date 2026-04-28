// Last updated: 28/4/2026, 10:10:56 pm
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int l = 0, zeros = 0, maxLen = 0;
5
6        for (int r = 0; r < nums.size(); r++) {
7            if (nums[r] == 0) zeros++;
8
9            // if invalid → shrink window
10            while (zeros > k) {
11                if (nums[l] == 0) zeros--;
12                l++;
13            }
14
15            maxLen = max(maxLen, r - l + 1);
16        }
17
18        return maxLen;
19    }
20};