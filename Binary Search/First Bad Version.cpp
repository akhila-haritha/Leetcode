class Solution {
public:
    int firstBadVersion(int n) {
        long long int first=0,last=n,mid,pos;
        while(first<=last){
          mid = (first+last)/2;
          if(isBadVersion(mid)==true){
            last = mid-1;
            pos=mid;
          }
          if(isBadVersion(mid)==false){
              first=mid+1;
          }
        }
        return pos;

        
    }
};
