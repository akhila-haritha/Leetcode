class Solution {
    bool ans;
public:
    void Postorder(TreeNode* root){
        if(root==NULL)return;
        else{
            TreeNode* p = root->left;
            TreeNode * q = root->right;
            if(!p || !q)return ;
            Postorder(root->left);
            Postorder(root->right);
            if(p->val + q->val != (root->val))ans = false;
        }

    }
    bool checkTree(TreeNode* root) {
        ans = true;
        Postorder(root);
        return ans;       
    }
};
