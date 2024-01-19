#include<climits>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN, sum=0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            if(m<sum){
                m = sum;}
            
            if(sum < 0){
                sum = 0;}
        }
        return m;
    }
};
