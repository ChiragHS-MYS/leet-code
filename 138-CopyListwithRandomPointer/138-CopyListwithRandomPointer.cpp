// Last updated: 19/2/2026, 8:42:15 am
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8    
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18public:
19    Node* copyRandomList(Node* head) {
20        unordered_map<Node*, Node*> hashMap;
21        Node* cur = head;
22
23        while (cur) {
24            hashMap[cur] = new Node(cur->val);
25            cur = cur->next;
26        }
27
28        cur = head;
29
30        while (cur) {
31            Node* copy = hashMap[cur];
32            copy->next = hashMap[cur->next];
33            copy->random = hashMap[cur->random];
34            cur = cur->next;
35        }
36
37        return hashMap[head];        
38    }
39};