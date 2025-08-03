class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> v;

        int srow=0;
        int scol=0;
        int erow=row-1;
        int ecol=col-1;
        while(srow<=erow && scol<=ecol){
            //top
            for(int i=scol;i<=ecol;i++){
                v.push_back(matrix[srow][i]);
            }

            //right
            for(int i=srow+1;i<=erow;i++){
                v.push_back(matrix[i][ecol]);
            }

            //bottom
             for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                v.push_back(matrix[erow][i]);
            }

            //left
            for(int i=erow-1;i>=srow+1;i--){
                 if(scol==ecol){
                    break;
                }
                v.push_back(matrix[i][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return v;
    }
};