#include<iostream>
 #include<algorithm>
 using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root){
            return 1+max(maxDepth(root->left),maxDepth(root->right));
        }
        return 0;
    }
};
