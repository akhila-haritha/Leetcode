class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int i=0,count,j,sum=0;
        for(i=0;i<nums.size();i++){
            count =0;
            for(j=0;j<nums.size();j++){
                if(nums[i]==nums[j])count++; }
            if(count==1)sum+=nums[i];
        }
        return sum;
        
    }
};
