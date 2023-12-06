class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0,count,k,ans,j;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i+=k){
            count=0;
            for(j=i;j<nums.size();j++){
                if(nums[i]==nums[j])count++;}
            k = count;
            if(count >= (nums.size()/2)+1)ans = nums[i];
        }
        return ans;
        
    }
};
