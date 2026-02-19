# Last updated: 19/2/2026, 9:13:52 am
class Solution:
    def addDigits(self, num: int) -> int:
        if(num==0):
            return 0
        elif(num%9==0):
            return 9
        else:
            return (num%9)
        