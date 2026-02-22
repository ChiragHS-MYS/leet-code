# Last updated: 22/2/2026, 10:20:43 pm
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Pair each number with its original index
        nums_with_index = [(num, i) for i, num in enumerate(nums)]
        # Sort by value
        nums_with_index.sort()

        l, r = 0, len(nums_with_index) - 1

        while l < r:
            total = nums_with_index[l][0] + nums_with_index[r][0]
            if total == target:
                return [nums_with_index[l][1], nums_with_index[r][1]]
            elif total < target:
                l += 1
            else:
                r -= 1