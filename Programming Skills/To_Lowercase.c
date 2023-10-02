char * toLowerCase(char * s){
    int i;
    for(i=0;i<strlen(s);i++){
        if(65<=s[i] && s[i]<=90){
            s[i] = s[i] + 32;
        }

    }
    return s;

}
