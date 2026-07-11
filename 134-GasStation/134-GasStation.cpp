// Last updated: 11/7/2026, 11:32:02 pm
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4
5        int totalGas = 0;
6        int totalCost = 0;
7
8        int tank = 0;
9        int start = 0;
10
11        for(int i=0;i<gas.size();i++){
12
13            totalGas += gas[i];
14            totalCost += cost[i];
15
16            tank += gas[i]-cost[i];
17
18            if(tank<0){
19
20                start=i+1;
21                tank=0;
22            }
23        }
24
25        if(totalGas<totalCost)
26            return -1;
27
28        return start;
29    }
30};