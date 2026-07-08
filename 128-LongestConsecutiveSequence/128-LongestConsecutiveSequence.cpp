// Last updated: 8/7/2026, 10:06:11 pm
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        unordered_set<int> st(nums.begin(), nums.end());
5        int current=0;
6        int length=0;
7        int maxlen=0;
8        for(int num:st){
9            if(st.find(num-1)==st.end()){
10                current=num;
11                length=1;
12                while(st.find(current+1) != st.end()){
13                    current++;
14                    length++;
15                }
16                maxlen=max(maxlen,length);
17
18            }
19        }
20        return maxlen;
21        
22    }
23};