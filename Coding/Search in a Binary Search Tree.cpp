class Solution {
    TreeNode* ans = NULL;
public:
    void findNode(TreeNode* root, int val){
        if(root==NULL)return;
        else{
            if(root->val > val)findNode(root->left,val);
            if(root->val <val)findNode(root->right,val);
            if(root->val == val)ans = root;
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        findNode(root,val);
        return ans;
    }
};
