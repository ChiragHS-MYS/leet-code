// Last updated: 3/3/2026, 11:55:55 pm
1class Solution {
2public:
3    vector<vector<int> > fourSum(vector<int> &num, int target) {
4    
5        vector<vector<int> > res;
6    
7        if (num.empty())
8            return res;
9    
10        std::sort(num.begin(),num.end());
11    
12        for (int i = 0; i < num.size(); i++) {
13        
14            long long target_3 = (long long)target - (long long)num[i];
15        
16            for (int j = i + 1; j < num.size(); j++) {
17            
18                long long target_2 = target_3 - (long long)num[j];
19            
20                int front = j + 1;
21                int back = num.size() - 1;
22            
23                while(front < back) {
24                
25                    int two_sum = num[front] + num[back];
26                
27                    if (two_sum < target_2) front++;
28                
29                    else if (two_sum > target_2) back--;
30                
31                    else {
32                    
33                        vector<int> quadruplet(4, 0);
34                        quadruplet[0] = num[i];
35                        quadruplet[1] = num[j];
36                        quadruplet[2] = num[front];
37                        quadruplet[3] = num[back];
38                        res.push_back(quadruplet);
39                    
40                        // Processing the duplicates of number 3
41                        while (front < back && num[front] == quadruplet[2]) ++front;
42                    
43                        // Processing the duplicates of number 4
44                        while (front < back && num[back] == quadruplet[3]) --back;
45                
46                    }
47                }
48                
49                // Processing the duplicates of number 2
50                while(j + 1 < num.size() && num[j + 1] == num[j]) ++j;
51            }
52        
53            // Processing the duplicates of number 1
54            while (i + 1 < num.size() && num[i + 1] == num[i]) ++i;
55        
56        }
57    
58        return res;
59    
60    }
61};