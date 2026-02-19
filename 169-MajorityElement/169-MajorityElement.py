# Last updated: 19/2/2026, 9:14:09 am
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums)//2]
