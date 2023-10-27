class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0,max_=0,i,j;
        for(i=0;i<sentences.size();i++){
            j=0;count=0;
            while(sentences[i][j] != '\0' && j<sentences[i].size()){
                if(sentences[i][j]==' ')count++;
                j++;}
            if(count>max_)max_=count;
       }
       return max_+1;
    }
};
