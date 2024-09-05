class Solution {
public:
    void genCombo(vector<vector<int>>&result, vector<int>&current, int n, int k, int idx){
        if(current.size()==k){
            result.push_back(current);
            return;}
        
        if(idx>n)return;
        current.push_back(idx);
        genCombo(result,current,n,k,idx+1);
        current.pop_back();
        genCombo(result,current,n,k,idx+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>result;
        vector<int>current;
        genCombo(result,current,n,k,1);
        return result;
        
    }
};
