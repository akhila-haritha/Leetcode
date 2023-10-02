char findTheDifference(char * s, char * t){
    int i=0,k,count_k,count_s,pos=0,j;
    while(i<strlen(t)){
        k=0;
        count_k=0;
        while(k<strlen(t)){
            if(t[i]==t[k]){
                count_k++;}       //checking for no.of occurrences in string t
            k++;}
        
        j=0;
        count_s=0;
        while(j<strlen(s)){
            if(t[i]==s[j]){
                count_s++;
                pos = i;          // checking for no.of occurrences in string s
            }
            j++;
        }
        if(count_k != count_s)return t[i];
        i++;
    }
    return 0;
}
