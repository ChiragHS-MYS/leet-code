// Last updated: 19/5/2026, 10:34:14 pm
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int l=0;
5        for(int r=0;r<nums.size();r++){
6            if(nums[r]!=0){
7                swap(nums[r],nums[l]);
8                l++;
9            }
10        }
11        
12    }
13};