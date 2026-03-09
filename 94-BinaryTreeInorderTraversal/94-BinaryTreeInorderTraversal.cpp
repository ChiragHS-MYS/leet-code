// Last updated: 9/3/2026, 10:43:36 pm
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
14    vector<int> inorderTraversal(TreeNode* root) {
15        vector<int> res;
16        inorder(root, res);
17        return res;        
18    }
19
20private:
21    void inorder(TreeNode* node, vector<int>& res) {
22        if (!node) {
23            return;
24        }
25        inorder(node->left, res);
26        res.push_back(node->val);
27        inorder(node->right, res);
28    }    
29};