class Solution {
public:
    vector<int> flattenMatrix(vector<vector<int>>&matrix){
        vector<int> ans;
        int i,j;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                ans.push_back(matrix[i][j]);}
        }
        return ans;
    }
    bool binarySearch(vector<int> &a,int target){
        int first=0,last = a.size()-1,mid;
        while(first<=last){
            mid = (first+last)/2;
            if(a[mid] == target)return true;
            if(a[mid] > target)last = mid - 1;
            if(a[mid] < target)first = mid + 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> a = flattenMatrix(matrix);
        return binarySearch(a,target);
    }
};
