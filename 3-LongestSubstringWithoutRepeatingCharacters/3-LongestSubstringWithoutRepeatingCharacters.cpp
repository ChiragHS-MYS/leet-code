// Last updated: 28/7/2026, 2:08:47 pm
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int maxlen=0;
5        int left=0;
6        unordered_map<char,int>mp;
7        for(int r=0;r<s.length();r++){
8            char c=s[r];
9            if(mp.find(c)!=mp.end() && mp[c]>=left){
10                left=mp[c]+1;
11            }
12            maxlen=max(maxlen,r-left+1);
13            mp[c]=r;
14
15        }
16        return maxlen;
17        
18    }
19};