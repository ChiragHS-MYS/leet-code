// Last updated: 27/4/2026, 5:56:39 pm
1    class Solution {
2    public:
3        int trap(vector<int>& height) {
4            int l=0;
5            int r=height.size()-1;
6            int lmax=0;
7            int rmax=0;
8            int sum=0;
9            while(l<r){
10                lmax=max(lmax,height[l]);
11                rmax=max(rmax,height[r]);
12                if(lmax<rmax){
13                    sum+=(lmax-height[l]);l++;
14                }
15                else{
16                    sum+=(rmax-height[r]);r--;
17                }
18            }
19            return sum;
20            
21        }
22    };