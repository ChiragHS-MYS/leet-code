// Last updated: 7/3/2026, 11:36:57 pm
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5        for (string s : strs) {
6            string t = s; 
7            sort(t.begin(), t.end());
8            mp[t].push_back(s);
9        }
10        vector<vector<string>> anagrams;
11        for (auto p : mp) { 
12            anagrams.push_back(p.second);
13        }
14        return anagrams;
15    }
16};