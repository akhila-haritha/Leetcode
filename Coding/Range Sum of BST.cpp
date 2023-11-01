class Solution {
public:
    int sum;
    void Inorder(TreeNode* root, int low, int high){
        if(root==NULL)return;
        else{
            if(root->val >=low && root->val <= high)sum+= root->val;
            Inorder(root->left,low,high);
            Inorder(root->right,low,high);
        }
        return;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum = 0;
        Inorder(root,low,high);
        return sum;
        
    }
};
