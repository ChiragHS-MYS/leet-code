// Last updated: 14/6/2026, 7:51:40 am
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int low = 0, mid = 0;
5        int high = nums.size() - 1;
6
7        while (mid <= high) {
8            if (nums[mid] == 0) {
9                swap(nums[low], nums[mid]);
10                low++; mid++;
11            }
12            else if (nums[mid] == 1) {
13                mid++;
14            }
15            else {
16                swap(nums[mid], nums[high]);
17                high--;
18            }
19        }
20    }
21};