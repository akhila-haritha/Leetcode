class Solution {
public:
    bool isPerfectSquare(int num) {
        long int first=1,last=num,mid;
        while(first<=last){
            mid = first + (last-first)/2;
            if(mid*mid == num){
                return true;}
            else if(mid*mid > num){
                last = mid-1;}
            else {
                first = mid + 1;}
        }
        return false;
        
    }
};
