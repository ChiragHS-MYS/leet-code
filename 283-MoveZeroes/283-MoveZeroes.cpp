// Last updated: 27/4/2026, 3:24:52 pm
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j = 0; // position for next non-zero
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] != 0) {
8                swap(nums[i], nums[j]);
9                j++;
10            }
11        }
12    }
13};