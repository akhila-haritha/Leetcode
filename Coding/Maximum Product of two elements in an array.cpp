class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_=0,i,j;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(i!=j){
                    if((nums[i]-1) * (nums[j]-1) > max_)max_ = (nums[i]-1) * (nums[j]-1);
                }
            }
        }
        return max_;
        
    }
};
