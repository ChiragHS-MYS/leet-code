// Last updated: 9/7/2026, 10:06:49 am
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4
5        stack<int> st;
6        unordered_map<int,int> mp;
7
8        for(int i = nums2.size()-1; i >= 0; i--){
9
10            while(!st.empty() && st.top() < nums2[i]){
11                st.pop();
12            }
13
14            if(st.empty())
15                mp[nums2[i]] = -1;
16            else
17                mp[nums2[i]] = st.top();
18
19            st.push(nums2[i]);
20        }
21
22        vector<int> ans;
23
24        for(int num : nums1){
25            ans.push_back(mp[num]);
26        }
27
28        return ans;
29    }
30};