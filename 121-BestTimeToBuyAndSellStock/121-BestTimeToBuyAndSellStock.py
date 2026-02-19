# Last updated: 19/2/2026, 9:14:22 am
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if(prices==0):
            return 0
        maxprofit=0
        minprice=prices[0]
        for i in prices:
            minprice=min(minprice,i)
            maxprofit=max(maxprofit,i-minprice)
        return maxprofit
        