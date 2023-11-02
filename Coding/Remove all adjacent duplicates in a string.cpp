class Solution {
public:
    string removeDuplicates(string s) {
        int i;
        string res;
        stack<char>ans;
        ans.push(s[0]);
        for(i=1;i<s.size();i++){
            if(!ans.empty() && ans.top()==s[i])ans.pop();
            else ans.push(s[i]);
        }
        while(!ans.empty()){
            res.insert(res.begin(),ans.top());
            ans.pop();}
        return res;
    }
};
