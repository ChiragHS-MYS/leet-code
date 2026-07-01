// Last updated: 1/7/2026, 2:41:42 pm
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minprice=prices[0];
5        int maxprofit=0;
6        int profit=0;
7        for (int i=1;i<prices.size();i++){
8            minprice=min(minprice,prices[i]);
9            profit=prices[i]-minprice;
10            maxprofit=max(maxprofit,profit);
11        }
12        return maxprofit;
13        
14    }
15};