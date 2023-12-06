class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=1,j,key;
        while(i<nums.size()){
            key = nums[i];
            j = i-1;
            while(j>=0 && nums[j] >= key){
                nums[j+1] = nums[j];
                j--;}
            nums[j+1] = key;
            i++;
        }
        
    }
};
