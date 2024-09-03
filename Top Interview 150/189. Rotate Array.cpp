class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp; int n=nums.size();
        if(n==1)return;
        if(n < k){
            k = k%n;
            
        } ;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);}
        
        int i = n-1,j=n-k-1;
        while(j>=0){
            nums[i]=nums[j];
            i--;j--;}
        
        j=0;
        while(j<=i){
            nums[j]=temp[j];
            j++;
        }
        return;
    }
};
