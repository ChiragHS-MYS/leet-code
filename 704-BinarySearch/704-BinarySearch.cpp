// Last updated: 8/7/2026, 10:35:39 pm
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int left=0;
5        int right=nums.size()-1;
6        while(left<=right){
7            int mid=left+(right-left)/2;
8            if(nums[mid] == target){
9                return mid;
10            }
11            else if(nums[mid]< target){
12                left=mid+1;
13            }
14            else{
15                right=mid-1;
16            }
17        }
18        return -1;
19        
20    }
21};