// Last updated: 12/6/2026, 10:34:29 pm
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> res;
5        sort(nums.begin(), nums.end());
6
7        int n = nums.size();
8
9        for (int i = 0; i < n; i++) {
10
11            // Skip duplicates
12            if (i > 0 && nums[i] == nums[i - 1]) continue;
13
14            int r = i + 1;
15            int l = n - 1;
16
17            while (r < l) {
18                int sum = nums[i] + nums[r] + nums[l];
19
20                if (sum == 0) {
21                    res.push_back({nums[i], nums[r], nums[l]});
22
23                    // Skip duplicates
24                    while (r < l && nums[r] == nums[r + 1]) r++;
25                    while (r < l && nums[l] == nums[l - 1]) l--;
26
27                    r++;
28                    l--;
29                }
30                else if (sum < 0) {
31                    r++;
32                }
33                else {
34                    l--;
35                }
36            }
37        }
38        return res;
39    }
40};