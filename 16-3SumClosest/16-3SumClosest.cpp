// Last updated: 15/4/2026, 11:12:57 pm
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        
6        int closest = nums[0] + nums[1] + nums[2];
7        
8        for(int i = 0; i < nums.size() - 2; i++) {
9            int left = i + 1;
10            int right = nums.size() - 1;
11            
12            while(left < right) {
13                int sum = nums[i] + nums[left] + nums[right];
14                
15                if(abs(target - sum) < abs(target - closest)) {
16                    closest = sum;
17                }
18                
19                if(sum < target) {
20                    left++;
21                } else if(sum > target) {
22                    right--;
23                } else {
24                    return sum; // exact match
25                }
26            }
27        }
28        
29        return closest;
30    }
31};