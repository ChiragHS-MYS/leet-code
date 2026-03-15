// Last updated: 15/3/2026, 10:53:55 pm
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11/**
12 * Definition for a binary tree node.
13 * struct TreeNode {
14 *     int val;
15 *     TreeNode *left;
16 *     TreeNode *right;
17 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
18 * };
19 */
20class Solution {
21public:
22    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
23        if ((root -> val > p -> val) && (root -> val > q -> val)) {
24            return lowestCommonAncestor(root -> left, p, q);
25        }
26        if ((root -> val < p -> val) && (root -> val < q -> val)) {
27            return lowestCommonAncestor(root -> right, p, q);
28        }
29        return root;
30    }
31};