// Last updated: 9/7/2026, 9:05:31 am
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int left=0;
5        int right=nums.size()-1;
6        int ans1=-1;
7        int mid;
8        while(left<=right){
9            mid=left+(right-left)/2;
10            if(nums[mid]==target){
11                ans1=mid;
12                right=mid-1;
13            }
14            else if(nums[mid]>target){
15                right=mid-1;
16            }
17            else{
18                left=mid+1;
19            }
20        }
21        left=0;
22        right=nums.size()-1;
23        int ans2=-1;
24        while(left<=right){
25            mid=left+(right-left)/2;
26            if(nums[mid]==target){
27                ans2=mid;
28                left=mid+1;
29            }
30            else if(nums[mid]>target){
31                right=mid-1;
32            }
33            else{
34                left=mid+1;
35            }
36        }
37        return{ans1,ans2};
38        
39        
40    }
41};