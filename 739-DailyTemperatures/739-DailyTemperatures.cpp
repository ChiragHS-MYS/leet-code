// Last updated: 9/7/2026, 10:44:48 am
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4
5        stack<int> st;
6        vector<int> ans(temperatures.size(),0);
7
8        for(int i = temperatures.size()-1; i >= 0; i--){
9
10            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
11                st.pop();
12            }
13
14            if(!st.empty()){
15                ans[i] = st.top() - i;
16            }
17
18            st.push(i);
19        }
20
21        return ans;
22    }
23};