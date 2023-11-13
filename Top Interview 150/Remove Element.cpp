class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,count=0,c=0;
        while(count<nums.size()){
            if(nums[i]==val){
                nums.erase(nums.begin() + i);
                nums.push_back(val);}
            else{
                c++;
                i++;}
            count++;
        }
        return c;
        
    }
};
