class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int j,i,count=0,p;
        for(i=0;i<nums.size();i++){
            count=0;
            for(j=0;j<nums.size();j++){
                
                if(nums[i]==nums[j]){count++;}
                if(count==1)p = j;
            
            }
            
        
    }
    return p;}
};
