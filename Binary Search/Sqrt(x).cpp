class Solution {
public:
    int mySqrt(int x) {
        long long int first=0,last=x,mid,temp;
        while(first<=last){
            mid = (first+last)/2;
            if(mid*mid == x){
                return mid;}

            if(mid*mid < x){
                temp = mid;
                first=mid+1;}

            if(mid*mid > x){
                last = mid-1;
            } 

        }
        return temp;
    }
};
