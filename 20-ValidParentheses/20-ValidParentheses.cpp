// Last updated: 9/7/2026, 9:34:12 am
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char>st;
5        for(char p:s){
6            if(p=='[' || p=='(' || p=='{'){
7                st.push(p);
8            }
9            else{
10                if(st.empty())
11                    return false;
12                else if(p==']' && st.top()!='[')
13                    return false;
14                else if(p==')' && st.top()!='(')
15                    return false;
16                else if(p=='}' && st.top()!='{')
17                    return false;
18                else
19                    st.pop();
20            }
21        } 
22        return st.empty(); 
23    }
24};