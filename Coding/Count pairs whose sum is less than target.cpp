class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0,i,j;
        for(i=0;i<nums.size();i++){
            for(j=0;j<i;j++){
                if(nums[i]+nums[j]<target)count++;
            }
        }
        return count;
        
    }
};
