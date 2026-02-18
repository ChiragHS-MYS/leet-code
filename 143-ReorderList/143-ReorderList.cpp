// Last updated: 18/2/2026, 10:06:36 pm
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
13    void reorderList(ListNode* head) {
14        if (!head) return;
15
16        // Step 1: Find the middle of the list
17        ListNode* slow = head;
18        ListNode* fast = head;
19        while (fast && fast->next) {
20            slow = slow->next;
21            fast = fast->next->next;
22        }
23
24        // Step 2: Reverse the second half of the list
25        ListNode* second = slow->next;
26        slow->next = nullptr;
27        ListNode* node = nullptr;
28
29        while (second) {
30            ListNode* temp = second->next;
31            second->next = node;
32            node = second;
33            second = temp;
34        }
35
36        // Step 3: Merge the two halves
37        ListNode* first = head;
38        second = node;
39
40        while (second) {
41            ListNode* temp1 = first->next;
42            ListNode* temp2 = second->next;
43            first->next = second;
44            second->next = temp1;
45            first = temp1;
46            second = temp2;
47        }
48    }
49};