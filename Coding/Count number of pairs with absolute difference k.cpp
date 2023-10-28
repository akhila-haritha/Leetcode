class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0,i,j;
        for(i=0;i<nums.size();i++){
            for(j=0;j<i;j++){
                if(abs(nums[i] - nums[j])==k)count++;}
        }
        return count;
    }
};
