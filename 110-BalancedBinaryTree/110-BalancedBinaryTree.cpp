// Last updated: 15/3/2026, 12:21:47 am
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int height(TreeNode* root) {
15        if (root == NULL) return 0;
16
17        int left = height(root->left);
18        if (left == -1) return -1;
19
20        int right = height(root->right);
21        if (right == -1) return -1;
22
23        if (abs(left - right) > 1) return -1;
24
25        return 1 + max(left, right);
26    }
27
28    bool isBalanced(TreeNode* root) {
29        return height(root) != -1;
30    }
31};