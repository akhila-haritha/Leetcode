class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i] != nums[i+1]) && count<=2)count=0;
            if(nums[i]!=nums[i-1] && nums[i]==nums[i+1])count++;
            if(nums[i]==nums[i-1] && nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--; count=2;
            }
        }
        return nums.size();
        
    }
};
