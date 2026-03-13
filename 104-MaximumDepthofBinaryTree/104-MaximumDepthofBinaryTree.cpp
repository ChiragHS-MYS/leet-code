// Last updated: 13/3/2026, 10:09:35 am
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
14    int maxDepth(TreeNode* root) {
15        int depth = 0;
16        if (!root) return depth;
17        queue<TreeNode*> level;
18        level.push(root);
19        while (!level.empty()) {
20            depth++;
21            int n = level.size();
22            for (int i = 0; i < n; i++) {
23                TreeNode* node = level.front();
24                level.pop();
25                if (node -> left) level.push(node -> left);
26                if (node -> right) level.push(node -> right);
27            }
28        }
29        return depth; 
30    } 
31};