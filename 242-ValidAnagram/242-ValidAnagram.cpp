// Last updated: 8/7/2026, 8:58:48 pm
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(s.begin(),s.end());
5        sort(t.begin(),t.end());
6        if(s==t){
7            return true;
8        }
9        else{
10            return false;
11        }
12        
13    }
14};