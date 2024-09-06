class Solution {
public:
    void func(vector<vector<int>>&result,vector<int>&current,vector<int>&candidates,int target,int idx){
        if(target==0){
            result.push_back(current);
            result;}
        
        

        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1])continue;
            if(candidates[idx] > target)return;
            current.push_back(candidates[i]);
            func(result,current,candidates,target-candidates[i],i+1);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>current;
        sort(candidates.begin(),candidates.end());
        func(result,current,candidates,target,0);
        return result;      
    }
};
