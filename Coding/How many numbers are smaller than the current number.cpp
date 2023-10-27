class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> ans;
        int i,count=0,j;
        for(i=0;i<nums.size();i++){
            count=0;
            for(j=0;j<nums.size();j++){
                if(i!=j && nums[j]<nums[i])count++;
            }
            ans.push_back(count);

        }
        return ans;
        
    }
};
