class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,k=0,count=0;
        while(i<t.length()){
            if(t[i]==s[k]){
                k++;
                count++;}
            i++;
        }
        if(count==s.length())return true;
        return false;
        
    }
};
