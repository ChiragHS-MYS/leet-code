// Last updated: 9/7/2026, 12:43:25 pm
1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4
5        sort(g.begin(), g.end());
6        sort(s.begin(), s.end());
7
8        int gp = 0;
9        int sp = 0;
10        int count = 0;
11
12        while(gp < g.size() && sp < s.size()){
13
14            if(s[sp] >= g[gp]){
15                count++;
16                gp++;
17                sp++;
18            }
19            else{
20                sp++;
21            }
22        }
23
24        return count;
25    }
26};