bool isAnagram(char * s, char * t){
    int count[26] = {0};
    int i;

    if(strlen(s)!=strlen(t))return false;
    for(i=0;i<strlen(s);i++){
        count[s[i] - 'a']++;}
    
    for(i=0;i<strlen(s);i++){
        count[t[i] - 'a']--;}
    
    for(i=0;i<strlen(s);i++){
        if(count[t[i]-'a']!=0)return false;}
    return true;
}
