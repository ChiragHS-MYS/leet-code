// Last updated: 10/7/2026, 11:40:07 pm
1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) {
4        unordered_map<int ,int>mp;
5        for(int i=0;i<bills.size();i++){
6            if(bills[i]==5){
7                mp[5]++;
8            }
9            else if (bills[i]==10){
10                if(mp[5]==0){
11                    return false;
12                }
13                mp[5]--;
14                mp[10]++;
15            }
16            else{
17                if(mp[5] !=0 && mp[10] !=0){
18                    mp[20]++;
19                    mp[10]--;
20                    mp[5]--;
21                    
22                }
23                else if(mp[5] >=3){
24                        mp[5]-=3;
25                }
26                else{
27                    return false;
28                }
29            }
30        }
31        return true;
32        
33    }
34};