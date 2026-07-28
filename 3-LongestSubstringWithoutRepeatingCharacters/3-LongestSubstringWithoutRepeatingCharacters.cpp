// Last updated: 28/7/2026, 2:08:11 pm
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int maxLength = 0;
5        int left = 0;
6        unordered_map<char, int> lastSeen;
7
8        for (int right = 0; right < s.length(); right++) {
9            char c = s[right];
10            if (lastSeen.find(c) != lastSeen.end() && lastSeen[c] >= left) {
11                left = lastSeen[c] + 1;
12            }
13            maxLength = max(maxLength, right - left + 1);
14            lastSeen[c] = right;
15        }
16
17        return maxLength;        
18    }
19};