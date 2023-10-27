class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0,i;
        for(i=0;i<hours.size();i++){
            if(hours[i]>=target)count++;}
        return count;
        
    }
};
