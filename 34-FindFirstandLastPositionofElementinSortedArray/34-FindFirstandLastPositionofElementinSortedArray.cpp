// Last updated: 8/7/2026, 11:22:24 pm
1class Solution {
2public:
3
4    int firstOccurrence(vector<int>& nums, int target) {
5        int left = 0;
6        int right = nums.size() - 1;
7        int ans = -1;
8
9        while (left <= right) {
10            int mid = left + (right - left) / 2;
11
12            if (nums[mid] == target) {
13                ans = mid;
14                right = mid - 1;   // Search left
15            }
16            else if (nums[mid] < target) {
17                left = mid + 1;
18            }
19            else {
20                right = mid - 1;
21            }
22        }
23
24        return ans;
25    }
26
27    int lastOccurrence(vector<int>& nums, int target) {
28        int left = 0;
29        int right = nums.size() - 1;
30        int ans = -1;
31
32        while (left <= right) {
33            int mid = left + (right - left) / 2;
34
35            if (nums[mid] == target) {
36                ans = mid;
37                left = mid + 1;    // Search right
38            }
39            else if (nums[mid] < target) {
40                left = mid + 1;
41            }
42            else {
43                right = mid - 1;
44            }
45        }
46
47        return ans;
48    }
49
50    vector<int> searchRange(vector<int>& nums, int target) {
51
52        return {firstOccurrence(nums, target),
53                lastOccurrence(nums, target)};
54    }
55};