# Last updated: 19/2/2026, 9:13:53 am
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)