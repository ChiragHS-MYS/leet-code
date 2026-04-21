// Last updated: 21/4/2026, 9:16:49 pm
1class Solution {
2public:
3
4    void rotate(vector<int>& nums, int k) {
5        int n=nums.size();
6        k%=n;
7        reverse(nums.begin(),nums.end());
8        reverse(nums.begin(),nums.begin()+k);
9        reverse(nums.begin()+k,nums.end());
10        }        
11    };