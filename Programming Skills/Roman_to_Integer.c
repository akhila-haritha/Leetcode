int val(char a){
    switch(a){
        case 'I':
        return 1;

        case 'V':
        return 5;

        case 'X':
        return 10;

        case 'L':
        return 50;

        case 'C':
        return 100;

        case 'D':
        return 500;

        case 'M':
        return 1000;
    }
    return 0;
}











int romanToInt(char * s){
    int i,count=0;
    i = strlen(s) - 1;
    count = val(s[i]);
    while(i>=1){
        if(val(s[i]) > val(s[i-1])){
            count -= val(s[i-1]);}
        else{
            count += val(s[i-1]);}
        i--;
    }

    return count;

}
