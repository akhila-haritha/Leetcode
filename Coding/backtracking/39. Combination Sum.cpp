class Solution {
public:
    void genCombo(vector<vector<int>>&result,vector<int>&current,vector<int>&candidates,int target,int idx){
        if(target==0){
            result.push_back(current);
            return;}

        for(int i=idx;i<candidates.size();i++){
            if(candidates[i] > target){
                break; }
            
            current.push_back(candidates[i]);
            genCombo(result,current,candidates,target-candidates[i],i);
            current.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>current;
        sort(candidates.begin(),candidates.end());
        genCombo(result,current,candidates,target,0);
        return result;
        
    }
};
