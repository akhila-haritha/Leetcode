class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> array;
        int i=0;
        array.push_back(first);
        for(i=0;i<encoded.size();i++){
            array.push_back(encoded[i]^array[i]);
        }
        return array;
        
    }
};
