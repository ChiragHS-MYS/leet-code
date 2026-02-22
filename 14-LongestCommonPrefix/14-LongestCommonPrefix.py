# Last updated: 22/2/2026, 10:20:37 pm

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        
        # Start with the first string as the prefix
        prefix = strs[0]
        
        for string in strs[1:]:
            # Reduce the prefix until it matches the start of the current string
            while not string.startswith(prefix):
                prefix = prefix[:-1]
                if not prefix:
                    return ""
        
        return prefix