// Last updated: 9/7/2026, 9:12:50 am
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        int left=0;
8        int right=n;
9        int ans=-1;
10        int mid;
11        while(left<=right){
12            mid=left+(right-left)/2;
13            if(isBadVersion(mid)== true){
14                ans=mid;
15                right=mid-1;
16            }
17            else if(isBadVersion(mid)== false)
18                left=mid+1;
19        
20        }
21        return ans;      
22    }
23};