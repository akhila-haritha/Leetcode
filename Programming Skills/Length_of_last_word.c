int lengthOfLastWord(char * s){
    int i=0,max=0,count,p,k,q;
    while(i<strlen(s)){
        count=0;p=i;k=0;
        while(s[p]== ' '){
            p++;
            k++;}
        
        while(s[p]!= ' ' && s[p] != '\0'){
            count++;
            p++;
            k++;
            if(count != 0)q = count;}
        i = i + k;
        
        
    }
    return q;

}
