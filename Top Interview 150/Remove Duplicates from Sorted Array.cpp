class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,count=0,n = nums.size();
        while(count<n-1){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin() + i);}
            else{
                i++;}
            count++;}
        return nums.size();
        
    }
};
