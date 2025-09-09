class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        bool c = false;      // track first column
        bool r = false;      // track first row

        // Check if first row needs to be zero
        for (int j = 0; j < col; j++) {
            if (matrix[0][j] == 0) {
                r = true;
                break;
            }
        }

        // Check for zeros in rest of the matrix
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    if (j == 0) {
                        c = true; // first column marker
                    } else {
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
        }

        // Zero out based on markers
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero out first row if needed
        if (r) {
            for (int j = 0; j < col; j++) {
                matrix[0][j] = 0;
            }
        }

        // Zero out first column if needed
        if (c) {
            for (int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
