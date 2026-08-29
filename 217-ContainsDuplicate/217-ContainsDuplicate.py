# Last updated: 29/8/2026, 7:39:30 pm
1class Solution:
2    def containsDuplicate(self, nums: List[int]) -> bool:
3        visited = dict()
4        for num in nums:
5            if num in visited:
6                return True
7            visited[num]=True
8        return False
9
10        # seen = set()
11        # for num in nums:
12        #     if num in seen:
13        #         return True
14        #     seen.add(num)
15        # return False
16
17