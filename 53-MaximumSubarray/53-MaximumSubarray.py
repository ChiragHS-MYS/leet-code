# Last updated: 22/2/2026, 10:20:16 pm
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cursum=0
        maxsum=nums[0]
        L,Lmax,Rmax=0,0,0
        for R in range(len(nums)):
            if(cursum<0):
                cursum=0
                L=R
            cursum+=nums[R]
            maxsum=max(maxsum,cursum)
            Lmax,Rmax=L,R
        return maxsum
        