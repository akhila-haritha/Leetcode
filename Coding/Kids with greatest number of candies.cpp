class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int i,max;
        max = candies[0];
        for(i=1;i<candies.size();i++){
            if(candies[i] > max)max = candies[i];}
        
        for(i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= max)ans.push_back(true);
            else ans.push_back(false);
        
    }
    return ans;}

};
