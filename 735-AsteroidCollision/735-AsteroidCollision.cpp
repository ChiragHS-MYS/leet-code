// Last updated: 9/4/2026, 11:05:22 pm
1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        std::stack<int> stack;
5
6        for (int a : asteroids) {
7            if (a > 0) {
8                stack.push(a);
9            } else {
10                while (!stack.empty() && stack.top() > 0 && stack.top() < -a) {
11                    stack.pop();
12                }
13
14                if (stack.empty() || stack.top() < 0) {
15                    stack.push(a);
16                }
17
18                if (!stack.empty() && stack.top() == -a) {
19                    stack.pop();
20                }
21            }
22        }
23
24        std::vector<int> res(stack.size());
25        int i = stack.size() - 1;
26
27        while (!stack.empty()) {
28            res[i--] = stack.top();
29            stack.pop();
30        }
31
32        return res;        
33    }
34};