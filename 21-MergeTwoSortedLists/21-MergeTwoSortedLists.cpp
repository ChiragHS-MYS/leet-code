// Last updated: 26/6/2026, 7:42:57 am
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        ListNode* sorted = new ListNode(-1);
15        ListNode* cur=sorted;
16        while(list1 && list2){
17            if(list1->val < list2->val){
18                cur->next=list1;
19                cur=cur->next;
20                list1=list1->next;
21            }
22            else{
23                cur->next=list2;
24                cur=cur->next;
25                list2=list2->next;
26
27            }
28        }
29        cur->next=list1?list1:list2;
30    return sorted->next;
31    }
32};