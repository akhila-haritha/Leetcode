class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i=0,j=0;
        while(i<word1.length() || j<word2.length()){
            if(i<word1.length()){
                ans += word1[i];
                i++;}
            
            if(j<word2.length()){
                ans+=word2[j];
                j++;}
        }
        return ans;
        
    }
};
