// Last updated: 26/3/2026, 10:35:40 pm
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& v) {
4        string ans="";
5        sort(v.begin(),v.end());
6        int n=v.size();
7        string first=v[0],last=v[n-1];
8        for(int i=0;i<min(first.size(),last.size());i++){
9            if(first[i]!=last[i]){
10                return ans;
11            }
12            ans+=first[i];
13        }
14        return ans;
15    }
16};