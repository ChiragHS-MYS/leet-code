// Last updated: 28/2/2026, 11:16:35 pm
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
5        
6        int n = nums.size();
7        nums.push_back(0);
8        int smallest = n;
9        for (int i = 0 ; i < n; ++i)
10        {
11            while(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i]])
12                swap(nums[i], nums[nums[i]]);
13        }
14        for (int i = 1; i <= n; ++i)
15            if (nums[i] != i)
16                return i;
17        return n + 1;
18    }
19};