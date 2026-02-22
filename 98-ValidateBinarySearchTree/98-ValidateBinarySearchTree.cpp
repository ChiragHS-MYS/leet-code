// Last updated: 22/2/2026, 10:20:12 pm
class Solution {
public:
long long curr = LONG_MIN;
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        if (isValidBST(root->left)==false) {
            return false;
        }
        if(root->val>curr){
            curr=root->val;
        }
        else{
            return false;
        }
        if (isValidBST(root->right)==false) {
            return false;
        }
        return true;
    }
};