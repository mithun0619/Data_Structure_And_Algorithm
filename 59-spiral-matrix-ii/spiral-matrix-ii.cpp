class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int srow=0;
        int erow=n-1;
        int scol=0;
        int ecol=n-1;
        int num=1;
        vector<vector<int>> v(n,vector<int>(n));

        while(srow<=erow && scol<=ecol){
            for(int i=srow;i<=ecol;i++){
                v[srow][i]=num;
                num++;
            }

            for(int i=srow+1;i<=erow;i++){
                v[i][ecol]=num;
                num++;
            }

            for(int i=ecol-1;i>=scol;i--){
                if(scol==ecol){
                    break;
                }
                v[erow][i]=num;
                num++;
            }

            for(int i=erow-1;i>=srow+1;i--){
                if(srow==erow){
                    break;
                }
                v[i][scol]=num;
                num++;
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return v;
    }
};