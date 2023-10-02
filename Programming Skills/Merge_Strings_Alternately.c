har * mergeAlternately(char * word1, char * word2){
     int i = 0, j = 0, l = 0;
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    
    char *word3 = malloc(sizeof(char) * (len1 + len2 + 1)); // +1 for null terminator
    
    while (i < len1 || j < len2) {
        if (i < len1) {
            word3[l++] = word1[i++];
        }
        
        if (j < len2) {
            word3[l++] = word2[j++];
        }
    }
    
    word3[l] = '\0'; // Null-terminate the merged string
    
    return word3;

}
