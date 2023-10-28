class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0,digit_sum=0,i,j;
        for(i=0;i<nums.size();i++){
            ele_sum +=nums[i];
            while(nums[i] >0){
                digit_sum += nums[i] %10;
                nums[i] /= 10;
            }
        }
        int diff = abs(ele_sum - digit_sum);
        return diff;
    }
};
