#include<iostream>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=0,sum=0,i,j,s=accounts.size();
        for(i=0;i<s;i++){
            sum=0;
            for(j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];}
            if(sum>max_wealth)max_wealth = sum;
        }
        return max_wealth;
        
    }
};
