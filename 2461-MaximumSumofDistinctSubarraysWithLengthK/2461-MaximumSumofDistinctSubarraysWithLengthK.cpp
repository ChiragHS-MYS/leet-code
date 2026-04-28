// Last updated: 28/4/2026, 7:50:50 pm
1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        int n = nums.size();
5        unordered_map<int,int>mpp;
6        long long maxsum = 0;
7        long long sum=0;
8        for(int i=0;i<nums.size();i++){
9            sum+=nums[i];
10            mpp[nums[i]]++;
11            if(i>=k){
12                sum-=nums[i-k];
13                mpp[nums[i-k]]--;
14                if(mpp[nums[i-k]]==0){
15                    mpp.erase(nums[i-k]);
16                }
17            }
18            if(i>=k-1&& mpp.size()==k){
19                maxsum=max(maxsum,sum);
20            }
21        }
22        return maxsum;
23    }
24};