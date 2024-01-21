class Solution {
public:
    int arrangeCoins(int n) {
        long long int first=1,last=n,mid,pos;
        while(first<=last){
            mid = (first+last)/2;
            if(mid*(mid+1)/2 == n){
                return mid;}
            
            if(mid*(mid+1)/2 < n){
                first= mid+1;}
            
            if(mid*(mid+1)/2 > n){
                pos = mid-1;
                last = mid-1;
            }
        }
        
        return pos;
        }
        
    
};
