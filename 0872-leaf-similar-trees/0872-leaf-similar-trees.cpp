class Solution {
public:
    void tree1(TreeNode* root1,  vector<int> &v1){
        if(!root1) return ;
         if(root1){
            tree2(root1->left, v1);
            if(root1->left == NULL && root1->right == NULL) v1.push_back(root1->val);
            tree2(root1->right, v1);
        }
    }
    void tree2(TreeNode* root2, vector<int> &v2){
        if(!root2) return;
        if(root2){
            tree2(root2->left, v2);
            if(root2->left == NULL && root2->right == NULL) v2.push_back(root2->val);
            tree2(root2->right, v2);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        if(!root1 || !root2) return false;
        vector<int> v1, v2;
        tree1(root1, v1);
        tree2(root2, v2);

        return v1==v2;
    }
};