class Solution {
public:
    int countNodes(TreeNode* root) {
         if(root == NULL) return 0;
        int left = countNodes(root->left);
        int right = countNodes(root->right);
        return left + right + 1;
    }
};