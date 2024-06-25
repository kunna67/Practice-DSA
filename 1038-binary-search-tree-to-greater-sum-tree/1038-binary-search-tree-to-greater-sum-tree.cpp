/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int>vec;

void put  (TreeNode*root){
    if(root==NULL)return  ;
   vec.push_back(root->val);
   put (root->left) ;
   put (root->right);
 }
 int sum (int num){
    int a = 0 ; 
    for(int i = 0;i<vec.size();i++){
      if(vec[i]>=num){a+=vec[i];}
    }
    return a;
 }
    void traverse(TreeNode* root){
        if(root==NULL)return ;
        root->val = sum(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        put(root);
        traverse(root);
        return root;
    }
};



