// Last updated: 1/7/2026, 4:02:11 pm
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int buy1=INT_MIN;
5        int sell1=0;
6        int buy2=INT_MIN;
7        int sell2=0;
8        for(int price:prices){
9            buy1=max(buy1,-price);
10            sell1=max(sell1,buy1+price);
11            buy2=max(buy2,sell1-price);
12            sell2=max(sell2,buy2+price);
13        }
14        return sell2;
15    }
16};