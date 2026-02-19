# Last updated: 19/2/2026, 9:14:10 am
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        r=0
        l=len(numbers)-1
        while(r<l):
            temp=numbers[r]+numbers[l]
            if(temp < target ):
                r+=1
            elif(temp >target):
                l-=1
            else:
                return([r+1,l+1])
