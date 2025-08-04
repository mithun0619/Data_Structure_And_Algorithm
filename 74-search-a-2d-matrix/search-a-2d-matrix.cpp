class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int n=matrix.size();
        int col=matrix[0].size()-1;
        

        while(row<n && col>=0){
            int cell=matrix[row][col];
            if(cell==target){
                return true;
            }else if(cell<target){
                row++;
            }else{
                col--;
            }
        }
        return false;
    }
};