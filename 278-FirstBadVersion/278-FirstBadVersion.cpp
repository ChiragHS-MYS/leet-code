// Last updated: 9/7/2026, 9:13:55 am
 class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n;
        int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};