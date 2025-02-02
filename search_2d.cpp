class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),cols=matrix[0].size();
        int i=0,j=matrix[0].size()-1;
        //while(i<rows && j<cols && i>=0 &&j>=0){
        while(i<rows && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]<target){
                i++;
            }
            else{
                j--;
            }
        }
    return false;
    }
};
