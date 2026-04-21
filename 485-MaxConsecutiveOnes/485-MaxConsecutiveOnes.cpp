// Last updated: 21/4/2026, 10:58:15 pm
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int m=0;int k=0;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]==1){
7                k++;
8                m=max(m,k);
9            }
10            else if(nums[i]==0){
11                k=0;
12            }
13        }   return m;
14        
15    }
16};