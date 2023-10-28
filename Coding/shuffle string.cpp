#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans(s.size(), ' '); // Initialize ans with size and default placeholder characters

        for (int i = 0; i < s.size(); i++) {
            ans[indices[i]] = s[i]; // Place the character from s at the specified index in ans
        }

        return ans;
    }
};
