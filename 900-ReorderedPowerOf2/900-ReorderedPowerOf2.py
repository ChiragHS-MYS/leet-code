# Last updated: 19/2/2026, 9:13:31 am
class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        s = sorted(str(n))
        return any(s == sorted(str(1 << i)) for i in range(31))