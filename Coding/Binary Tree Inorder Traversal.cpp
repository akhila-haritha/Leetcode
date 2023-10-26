class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL)return;
        else{
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> result;
        inorder(root,result);
        return result;
        
    }
};
