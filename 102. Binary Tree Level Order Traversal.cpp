 #include<queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> final;
        if(root==nullptr)return final;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            vector<int> ans;
            int q_size = Q.size();
            for(int i=0;i<q_size;i++){
                TreeNode * temp = Q.front();
                ans.push_back(temp->val);
                Q.pop();

                if(temp->left)Q.push(temp->left);
                if(temp->right)Q.push(temp->right);   }
            final.push_back(ans);}
        return final;       
    }
};
