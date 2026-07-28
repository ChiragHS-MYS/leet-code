// Last updated: 28/7/2026, 6:13:00 pm
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4
5        if(s.length() != t.length())
6            return false;
7
8        unordered_map<char,int> mp;
9
10        for(char c : s)
11            mp[c]++;
12
13        for(char c : t){
14
15            mp[c]--;
16
17            if(mp[c] < 0)
18                return false;
19        }
20
21        return true;
22    }
23};