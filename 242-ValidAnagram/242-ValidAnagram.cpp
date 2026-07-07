// Last updated: 7/7/2026, 3:07:49 pm
1#include <unordered_map>
2
3class Solution {
4public:
5    bool isAnagram(string s, string t) {
6
7        if (s.size() != t.size())
8            return false;
9
10        unordered_map<char, int> mp;
11
12        for (char c : s)
13            mp[c]++;
14
15        for (char c : t) {
16            if (mp[c] <=0)
17                return false;
18            mp[c]--;
19        }
20
21        return true;
22    }
23};