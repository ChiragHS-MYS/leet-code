// Last updated: 15/3/2026, 12:54:36 am
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
14
15    bool isSame(TreeNode* p, TreeNode* q){
16        if(p == NULL && q == NULL)
17            return true;
18
19        if(p == NULL || q == NULL)
20            return false;
21
22        if(p->val != q->val)
23            return false;
24
25        return isSame(p->left, q->left) &&
26               isSame(p->right, q->right);
27    }
28
29    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
30
31        if(root == NULL)
32            return false;
33
34        if(isSame(root, subRoot))
35            return true;
36
37        return isSubtree(root->left, subRoot) ||
38               isSubtree(root->right, subRoot);
39    }
40};