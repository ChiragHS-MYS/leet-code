// Last updated: 21/4/2026, 10:15:06 pm
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int k =0;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]!=0){
7                nums[k++]=nums[i];
8            }
9        }
10        while(k<nums.size()){
11            nums[k++]=0;
12        }
13        }
14    
15};