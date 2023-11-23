class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i,j,count=0;
        for(i=0;i<stones.size();i++){
            j=0;
            while(j<jewels.size()){
                if(stones[i]==jewels[j])count++;
                j++;}
            
        }
        return count;}
};
