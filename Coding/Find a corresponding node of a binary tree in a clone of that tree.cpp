class Solution {
    TreeNode *ans;
public:
    void sol(TreeNode* clone, TreeNode * target){
        if(clone==NULL)return ;
        if(clone->val == target->val)ans = clone;
        sol(clone->left,target);
        sol(clone->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        sol(cloned,target);
        return ans;

        
    }
};
