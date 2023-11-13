class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int pos;
        
        vector <string> ans;
        while(!heights.empty()){
            auto s= max_element(heights.begin(),heights.end());
            pos = distance(heights.begin(),s);

            ans.push_back(names[pos]);

            heights.erase(heights.begin()+pos);

            names.erase(names.begin() + pos);

        }

        return ans;
        
    }
};
