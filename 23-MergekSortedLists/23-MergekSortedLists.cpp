// Last updated: 26/2/2026, 11:18:52 pm
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
13    ListNode *mergeKLists(vector<ListNode *> &lists) {
14    if(lists.empty()){
15        return nullptr;
16    }
17    while(lists.size() > 1){
18        lists.push_back(mergeTwoLists(lists[0], lists[1]));
19        lists.erase(lists.begin());
20        lists.erase(lists.begin());
21    }
22    return lists.front();
23}
24ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
25    if(l1 == nullptr){
26        return l2;
27    }
28    if(l2 == nullptr){
29        return l1;
30    }
31    if(l1->val <= l2->val){
32        l1->next = mergeTwoLists(l1->next, l2);
33        return l1;
34    }
35    else{
36        l2->next = mergeTwoLists(l1, l2->next);
37        return l2;
38    }
39}
40};