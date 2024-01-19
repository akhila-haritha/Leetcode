/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int first=1,last=n,mid,p;
        while(first<last){
            mid = (first+last)/2;
            if(mid > n){
                last=mid-1;}
            else if(mid < n){
                first = mid+1;}
            else{
                p = mid;
            }
        }
        return p;

    }
};
