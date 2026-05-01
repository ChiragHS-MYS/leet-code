// Last updated: 2/5/2026, 12:23:51 am
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        int l=0;
5        long long pro=1;
6        int count=0;
7        if (k <= 1) return 0;
8        for(int r=0;r<nums.size();r++){
9            pro*=nums[r];
10            while(pro>=k){
11                pro/=nums[l];
12                l++;
13           } 
14           count+=(r-l+1);
15
16        }
17        return count;
18        
19    }
20};