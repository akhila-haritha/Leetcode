class Solution {
public:
    double average(vector<int>& salary) {
        double min = salary[0];
        double max = salary[0];
        double sum = 0;
        int i;
        for(i=0;i<salary.size();i++){
            if(salary[i]<min)min = salary[i];
            if(salary[i]>max)max = salary[i];
            sum += salary[i];
        }
        sum -= min;
        sum -= max;
        return sum/(salary.size()-2);
        
    }
};
