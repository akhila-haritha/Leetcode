char nextGreatestLetter(char* letters, int lettersSize, char target){
    
    if(target<letters[0] || target>letters[lettersSize-1])return letters[0];
    int i=0;
    while(i<lettersSize){
        if(letters[i]>target)return letters[i];
        i++;
    }
    return letters[0];

}
