class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int area=1, mn=INT_MAX,pos_i=0,pos_j=height.size()-1,mx=INT_MIN;
        while(i<=j){
            if(height[i] < height[j]){
                mn = height[i];
                pos_i=i;i++;}
            
            else{
                mn = height[j];
                pos_j=j;j--;}
            
            area = mn*(pos_j-pos_i);
            if(area>mx)mx=area;
            pos_i=i;pos_j=j;
        
        }
        return mx;
        
    }
};
