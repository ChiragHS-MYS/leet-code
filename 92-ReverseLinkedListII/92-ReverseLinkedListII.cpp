// Last updated: 22/2/2026, 10:18:39 pm
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14        if (!head || left == right) return head;
15
16        ListNode* dummy = new ListNode(0);
17        dummy->next = head;
18        ListNode* prev = dummy;
19
20        // Step 1: Move prev to node before 'left'
21        for (int i = 1; i < left; i++) {
22            prev = prev->next;
23        }
24
25        ListNode* curr = prev->next;
26
27        // Step 2: Reverse between left and right
28        for (int i = 0; i < right - left; i++) {
29            ListNode* temp = curr->next;
30            curr->next = temp->next;
31            temp->next = prev->next;
32            prev->next = temp;
33        }
34
35        return dummy->next;
36    }
37};
38
39        