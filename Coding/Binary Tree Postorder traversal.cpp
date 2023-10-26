class Solution {
public:
    void postorder(TreeNode* root,vector<int> & ans){
        if(root){
            postorder(root->left,ans);
            postorder(root->right,ans);
            ans.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> result;
        postorder(root,result);
        return result;
        
    }
};
