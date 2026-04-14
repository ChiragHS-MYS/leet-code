// Last updated: 14/4/2026, 11:09:35 pm
1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows == 1 || numRows >= s.length()) {
5            return s;
6        }
7
8        int idx = 0, d = 1;
9        vector<vector<char>> rows(numRows);
10
11        for (char c : s) {
12            rows[idx].push_back(c);
13            if (idx == 0) {
14                d = 1;
15            } else if (idx == numRows - 1) {
16                d = -1;
17            }
18            idx += d;
19        }
20
21        string result;
22        for (const auto& row : rows) {
23            for (char c : row) {
24                result += c;
25            }
26        }
27
28        return result;        
29    }
30};