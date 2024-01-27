class Solution {
public:
    int xorOperation(int n, int start) {
        int a[n],i,ans=0;
        i=0;
        for(i=0;i<n;i++){
            a[i] = start + 2*i;
            ans ^= a[i];}
        return ans;
        
    }
};
