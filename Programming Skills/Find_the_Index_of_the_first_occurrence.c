int strStr(char * haystack, char * needle){
    int i=0,p=0,j,count;
    while(p<strlen(haystack)){
        j=0; count=0;
        p=i;
        while(j<strlen(needle)){
            if(needle[j++]==haystack[i++]){
                count++;}
            else break;
        }

        if(count==strlen(needle))return p;
        p++;
        i=p;
    }
    return -1;

}
