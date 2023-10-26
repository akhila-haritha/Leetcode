class Solution {
public:
    void preorder(TreeNode* root,vector<int>& ans){
        if(root==NULL)return;
        else{
            ans.push_back(root->val);
            preorder(root->left,ans);
            preorder(root->right,ans);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        preorder(root,result);
        return result;
        
    }
};
