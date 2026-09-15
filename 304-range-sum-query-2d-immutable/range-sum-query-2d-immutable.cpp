class NumMatrix {
public:
    vector<vector<int>> p;

    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        p.assign(m + 1, vector<int>(n + 1));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                p[i][j] = matrix[i - 1][j - 1]
                        + p[i - 1][j]
                        + p[i][j - 1]
                        - p[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int r1, int c1, int r2, int c2) {
        return p[r2 + 1][c2 + 1]
             - p[r1][c2 + 1]
             - p[r2 + 1][c1]
             + p[r1][c1];
    }
};