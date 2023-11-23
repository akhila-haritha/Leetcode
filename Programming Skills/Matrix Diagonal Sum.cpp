class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(),i=0,sum=0;
        while(i<n){
            sum += mat[i][i];
            sum += mat[i][n-1-i];
            i++;
        }
        if(n%2!=0){
            sum  = sum - (mat[n/2][n/2]);
        }
        return sum;
    }
};
