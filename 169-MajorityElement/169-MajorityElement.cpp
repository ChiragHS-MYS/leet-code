// Last updated: 8/7/2026, 8:51:48 pm
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int candidate=0;
5        int count=0;
6        for(int i=0;i<nums.size();i++){
7            if(count==0){
8                candidate=nums[i];
9            }
10            if(nums[i]==candidate){
11                count++;
12            }
13            else{
14                count--;
15            }
16        }
17        return candidate;
18        
19    }
20};