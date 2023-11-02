class Solution {
public:
    int count_bits(int i){
        int count=0;
        while(i>0){
            if(i%2==1)count++;
            i/=2;}
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int i,sum=0;
        for(i=0;i<nums.size();i++){
            if(count_bits(i)==k)sum+=nums[i];}
        return sum;
        
    }
};
