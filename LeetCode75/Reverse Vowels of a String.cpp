class Solution {
public:
    bool isVowel(char a){
        switch(a){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            return true;
        }
        return false;
    }



    string reverseVowels(string s) {
        int i=0,j=s.length()-1,key;
        while(i<=j){
            if(isVowel(s[i]) && isVowel(s[j])){
                key = s[i];
                s[i] = s[j];
                s[j] = key;
                i++; j--;}
            
            else if(!isVowel(s[i]) && isVowel(s[j])){
                i = i+1;}
            
            else if(isVowel(s[i]) && !isVowel(s[j])){
                j = j-1;}

            else {
                i++;
                j--;}
        }
        return s;
        
    }
};
