// Last updated: 1/4/2026, 10:32:45 pm
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int count[3]={0},k=0;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]==0)count[0]++;
7            else if(nums[i]==1)count[1]++;
8            else count[2]++;
9        }
10        for(int i=0;i<3;i++)
11        {
12            while(count[i]){
13                nums[k]=i;
14                k+=1;
15                count[i]--;
16
17            }
18        }
19        
20    }
21};