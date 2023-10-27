class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ans;
        int i=0,j=0,k=n;
        while(i<2*n){
            if(i%2==0){
                ans.push_back(nums[j]);
                j++;}
            else{
                ans.push_back(nums[k]);
                k++;}
            i++;
        }
        return ans;
    }
};
