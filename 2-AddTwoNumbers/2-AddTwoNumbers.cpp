// Last updated: 21/2/2026, 7:53:45 am
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode * newnode=new ListNode(0);
15        ListNode * res=newnode;
16        int total=0,carry=0;
17        while(l1 ||l2 ||carry)
18        {
19            total=carry;
20            if(l1){
21                total+=l1->val;
22                l1=l1->next;
23            }
24             if(l2){
25                total+=l2->val;
26                l2=l2->next;
27            }
28            int num=total%10;
29            carry=total/10;
30            newnode->next=new ListNode(num);
31            newnode=newnode->next;
32        }
33        return res->next;
34
35    }
36};