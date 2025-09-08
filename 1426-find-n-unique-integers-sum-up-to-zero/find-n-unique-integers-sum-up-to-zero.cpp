class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v(n,0);
        v[0]=n*(1-n)/2;

        for(int i=1;i<n;i++){
            v[i]=i;
        }
        return v;
    }
};