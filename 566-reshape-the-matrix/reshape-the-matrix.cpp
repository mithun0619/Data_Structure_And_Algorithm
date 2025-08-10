class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        vector<vector<int>> ans(r,vector<int>(c));
        int x=0;
        int y=0;

        if(row*col!=r*c)return mat;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               if(y==c){
                x++;
                y=0;
               } 
               ans[x][y]=mat[i][j];
               y++;
            }
        }
        return ans;

    }
};