class Solution {
public:
    string truncateSentence(string s, int k) {
        int sp=0; 
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==32)
            {
                sp++;
                if(sp==k)
                {
                    s.erase(s.begin()+i,s.end());
                    break;
                    
                }
            } 
        }
        return s;
    }
};
