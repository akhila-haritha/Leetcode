#include<cmath>
class Solution {
public:
    bool isPalindrome(int x) {
        long int n = x,sum=0;
        //count the no.ofdigits
        int count=0;
        while(x>0){
            count++;
            x/=10;}
        long int p = n,i;
        while(p>0){
            int s = p%10;
            sum += s*pow(10,count-1);
            p/=10;
            count--;}
        return sum==n;
        
    }
};
