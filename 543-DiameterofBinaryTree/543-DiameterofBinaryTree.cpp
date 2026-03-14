// Last updated: 15/3/2026, 12:08:09 am
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
14    int diameter = 0;
15
16    int height(TreeNode* root) {
17        if (root == NULL) return 0;
18
19        int left = height(root->left);
20        int right = height(root->right);
21
22        diameter = max(diameter, left + right);
23
24        return 1 + max(left, right);
25    }
26
27    int diameterOfBinaryTree(TreeNode* root) {
28        height(root);
29        return diameter;
30    }
31};