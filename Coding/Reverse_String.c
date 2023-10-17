void reverseString(char* s, int sSize){
    int i=0,p,q;
    while(i<=(sSize-1)/2){
        p = s[i];
        q = s[sSize-1-i];
        s[sSize-1-i] = p;
        s[i] = q;
        i++;
    }
}
