#include <stack>
#include <string>

class Solution {
public:
    bool backspaceCompare(std::string s, std::string t) {
        std::stack<char> stackS, stackT;

        for (char c : s) {
            if (c == '#' && !stackS.empty()) {
                stackS.pop();
            } else if (c != '#') {
                stackS.push(c);
            }
        }

        for (char c : t) {
            if (c == '#' && !stackT.empty()) {
                stackT.pop();
            } else if (c != '#') {
                stackT.push(c);
            }
        }

        std::string res_S, res_T;
        while (!stackS.empty()) {
            res_S = stackS.top() + res_S;
            stackS.pop();
        }
        
        while (!stackT.empty()) {
            res_T = stackT.top() + res_T;
            stackT.pop();
        }

        return res_S == res_T;
    }
};
