class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.begin()+nums.size());
        int c=nums.size()/2;int ans;
        for(int i=0;i<nums.size()-c;i++){
            if(nums[i]==nums[i+c])ans=nums[i];
        }
        
        return ans;
    }
};
