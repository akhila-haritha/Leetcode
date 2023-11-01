class Solution {
    int count=0;
public:
    void preorder(TreeNode* root){
        if(root==NULL)return;
        else{
            preorder(root->left);
            count++;
            preorder(root->right);

        }
    }
    int countNodes(TreeNode* root) {
        preorder(root);
        return count;
        
    }
};
