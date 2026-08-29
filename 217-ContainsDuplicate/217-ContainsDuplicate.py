# Last updated: 29/8/2026, 7:41:44 pm
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()

        for i in range(len(nums)): 
            if nums[i] in seen: 
                return True
            else: 
                seen.add(nums[i])
        return False
        
        