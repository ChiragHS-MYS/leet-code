// Last updated: 9/7/2026, 9:52:24 am
1class MinStack {
2public:
3    stack<int> st;
4    stack<int> minSt;
5
6    MinStack() {
7
8    }
9
10    void push(int val) {
11        st.push(val);
12
13        if(minSt.empty())
14            minSt.push(val);
15        else
16            minSt.push(min(val, minSt.top()));
17    }
18
19    void pop() {
20        st.pop();
21        minSt.pop();
22    }
23
24    int top() {
25        return st.top();
26    }
27
28    int getMin() {
29        return minSt.top();
30    }
31};