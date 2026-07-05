// Last updated: 5/7/2026, 2:07:16 pm
1class Solution {
2public:
3    int climbStairs(int n) {
4        if(n==1)return 1;
5        if (n==2) return 2;
6        int prev1=1;
7        int prev2=2;
8        long cur;
9        for(int i=3;i<=n;i++){
10            cur= prev1+prev2;
11            prev1=prev2;
12            prev2=cur;
13        }
14        return prev2;
15        
16    }
17};