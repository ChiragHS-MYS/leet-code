// Last updated: 25/6/2026, 9:14:06 am
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        ListNode* prev = nullptr;
15
16        while (head != nullptr) {//head means cur
17            ListNode* next = head->next;
18            head->next = prev;
19            prev = head;
20            head = next;
21        }
22        return prev;//as we will be in the last node which is the cur first node
23        // ListNode* temp=head;  
24        // vector<int>vec;
25        // while(temp!=nullptr){
26        //    vec.push_back(temp->val);
27        //    temp=temp->next;
28
29        // }
30        // temp=head;
31        // int k=vec.size()-1;
32        // while(temp!=nullptr){
33        //     temp->val=vec[k--];
34        //     temp=temp->next;
35        // }
36        // return head;
37    }    
38};