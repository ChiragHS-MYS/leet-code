// Last updated: 28/7/2026, 12:48:06 pm
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int low=0;
5        int high=numbers.size()-1;
6        while(low<high){
7            int sum=numbers[low]+numbers[high];
8            if(sum==target){
9                return{low+1,high+1};
10            }
11            else if(sum <target){
12                low++;
13            }
14            else{
15                high--;
16            }
17        }
18        return{-1,-1};
19        
20    }
21};