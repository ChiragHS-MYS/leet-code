// Last updated: 27/4/2026, 3:18:28 pm
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int r = 0;
5        int l = numbers.size() - 1;
6
7        while (r < l) {
8            int sum = numbers[r] + numbers[l];
9
10            if (sum == target) {
11                return {r+1, l+1};  // if 1-based needed → {r+1, l+1}
12            }
13            else if (sum < target) {
14                r++;
15            }
16            else {
17                l--;  // ✅ FIXED
18            }
19        }
20        return {-1, -1};
21    }
22};