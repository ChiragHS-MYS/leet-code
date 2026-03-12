// Last updated: 12/3/2026, 10:51:19 pm
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
14    TreeNode* invertTree(TreeNode* root) {
15        // Base Case
16        if(root==NULL)
17            return NULL;
18        invertTree(root->left); //Call the left substree
19        invertTree(root->right); //Call the right substree
20        // Swap the nodes
21        TreeNode* temp = root->left;
22        root->left = root->right;
23        root->right = temp;
24        return root; // Return the root
25    }
26};