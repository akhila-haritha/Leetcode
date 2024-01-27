class Solution {
public:
    int countDigits(int num) {
        int count=0,s = num;
        while(num>0){
            int p = num %10;
            if(s%p==0)count++;

            num /=10;
        }
        return count;
        
    }
};
