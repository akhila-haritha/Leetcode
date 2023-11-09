class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max=0,i=0,p;
        while(i<nums.size()){
            if(nums[i]==1)count++;
            else{
                if(count>max){
                    max = count;
                    p = max;}
                count=0;}
            i++;
        }
        if(count>max)max=count;
        return max;
        
    }
};
