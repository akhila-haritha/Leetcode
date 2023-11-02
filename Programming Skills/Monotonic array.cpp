class Solution {
public:
    bool MonIn(vector<int> &nums){
        int d,diff,i=0;
        d = nums[nums.size()-1] - nums[0];
        if(d<0)return false;
        while(i<nums.size()-1){
            if(nums[i+1]-nums[i] <0){
                return false;}
                i++;
            }
        return true;

    }

    bool MonDec(vector<int> &nums){
        int d,diff,i=0;
        d = nums[nums.size()-1] - nums[0];
        if(d>0)return false;
        while(i<nums.size()-1){
            if(nums[i+1]-nums[i]>0){return false;}
            i++;
        }return true;}
    bool isMonotonic(vector<int>& nums) {
        return MonIn(nums) || MonDec(nums);
        
    }
};
