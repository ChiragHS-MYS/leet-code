// Last updated: 11/3/2026, 10:45:51 pm
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
14    vector<int> postorderTraversal(TreeNode* root) {
15        vector<int> nodes;
16        postorder(root, nodes);
17        return nodes;
18    }
19private:
20    void postorder(TreeNode* root, vector<int>& nodes) {
21        if (!root) {
22            return;
23        }
24        postorder(root -> left, nodes);
25        postorder(root -> right, nodes);
26        nodes.push_back(root -> val);
27    }
28};