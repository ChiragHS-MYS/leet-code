# Last updated: 19/2/2026, 9:14:20 am
class Solution:
    def maxProfit(self, a: List[int]) -> int:
        ans=0
        x=a[0]
        for i in range(1,len(a)):
            if(x>a[i]):
                x=a[i]
            else:
                ans+=a[i]-x
                x=a[i]
        return ans

        