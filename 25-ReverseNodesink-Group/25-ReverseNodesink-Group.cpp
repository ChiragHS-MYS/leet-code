// Last updated: 27/2/2026, 10:47:49 pm
1class Solution {
2public:
3    ListNode* reverseKGroup(ListNode* head, int k) {
4        if (k < 2) return head;
5
6        ListNode* check = head;
7        int count = 0;
8
9        while (check) {
10            count++;
11            check = check->next;
12        }
13
14        int groups = count / k;
15
16        ListNode* res = new ListNode(-1);
17        ListNode* dummy = res;
18
19        for (int i = 0; i < groups; i++) {
20            ListNode* curr = nullptr;
21            ListNode* groupHead = head;
22
23            for (int j = 0; j < k; j++) {
24                ListNode* temp = head->next;
25                head->next = curr;
26                curr = head;
27                head = temp;
28            }
29
30            dummy->next = curr;
31
32            while (dummy->next)
33                dummy = dummy->next;
34        }
35
36        dummy->next = head;
37
38        return res->next;
39    }
40};