/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        if(root->val==p->val)return root;
        if(root->val==q->val)return root;
        
        if(p->val<root->val && q->val>root->val)return root;
        else if(p->val>root->val && q->val<root->val)return root;
        
        if(p->val<root->val && q->val<root->val){
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(p->val>root->val && q->val>root->val){
            return lowestCommonAncestor(root->right,p,q);
        }
        return NULL;
    }
};