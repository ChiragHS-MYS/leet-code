// Last updated: 19/2/2026, 9:13:59 am
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = countNodes(root->left);
        int right = countNodes(root->right);
        return 1 + left + right;
    }
};