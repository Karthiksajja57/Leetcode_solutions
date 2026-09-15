class NumMatrix {
public:

    vector<vector<int>> arr;

    NumMatrix(vector<vector<int>>& matrix) {
        // row - Sum 
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 1; j < m; j++){
                matrix[i][j] = matrix[i][j-1] + matrix[i][j];
            }
        }
        for(int j = 0; j < m; j++){
            for(int i = 1; i < n; i++){
                matrix[i][j] = matrix[i-1][j] + matrix[i][j];
            }
        }

        arr = matrix;

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int leftRegion = ((col1 - 1) >= 0) ? arr[row2][col1-1] : 0;
        int rightRegion = ((row1 - 1) >= 0) ? arr[row1-1][col2] : 0;
        int doublyReduced = ((col1 - 1) >= 0 && (row1 - 1) >= 0) ? arr[row1-1][col1-1] : 0;
        return arr[row2][col2] - leftRegion - rightRegion + doublyReduced;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */