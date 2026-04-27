// Last updated: 27/4/2026, 5:09:52 pm
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int l = 0, r = height.size() - 1;
5        int maxArea = 0;
6
7        while (l < r) {
8            int h = min(height[l], height[r]);
9            int w = r - l;
10            maxArea = max(maxArea, h * w);
11
12            // Move smaller height
13            if (height[l] < height[r]) {
14                l++;
15            } else {
16                r--;
17            }
18        }
19        return maxArea;
20    }
21};