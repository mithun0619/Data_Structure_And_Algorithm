class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return {};
        vector<vector<int>> ans(m, vector<int>(n));
        int i=0;
        while (i < original.size()) {
            ans[i / n][i % n] = original[i];
            i++;
        }
        return ans;
    }
};