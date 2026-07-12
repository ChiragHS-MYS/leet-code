// Last updated: 12/7/2026, 11:00:57 pm
1class Solution {
2public:
3
4    bool canEat(vector<int>& piles,int h,int k){
5
6        long long hours=0;
7
8        for(int pile:piles){
9
10            hours += (pile+k-1)/k;
11
12            if(hours>h)
13                return false;
14        }
15
16        return true;
17    }
18
19    int minEatingSpeed(vector<int>& piles, int h) {
20
21        int low=1;
22        int high=*max_element(piles.begin(),piles.end());
23
24        int ans=high;
25
26        while(low<=high){
27
28            int mid=low+(high-low)/2;
29
30            if(canEat(piles,h,mid)){
31
32                ans=mid;
33                high=mid-1;
34            }
35            else{
36
37                low=mid+1;
38            }
39        }
40
41        return ans;
42    }
43};