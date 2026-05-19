// Last updated: 19/5/2026, 10:36:33 pm
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int l=0;
5        for(int r=0;r<nums.size();r++){
6            if(nums[r]!=0){
7                nums[l++]=nums[r];
8            }
9        }
10        while(l<nums.size()){
11            nums[l++]=0;
12        }
13        
14    }
15};