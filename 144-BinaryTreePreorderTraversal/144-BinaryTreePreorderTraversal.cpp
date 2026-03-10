// Last updated: 10/3/2026, 11:12:42 pm
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
14    void preorder(TreeNode*root,vector<int>&res){
15        if(root==NULL)return;
16        res.push_back(root->val);
17        preorder(root->left,res);
18        preorder(root->right,res);
19    }
20    vector<int> preorderTraversal(TreeNode* root) {
21        vector<int>res;
22        preorder(root,res);
23        return res;
24        
25    }
26};