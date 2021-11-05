class Solution {
  public: int uniquePaths(int n, int m) {
    int grid[n][m];
    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (i == 0) grid[0][j] = 1;
        if (j == 0) grid[i][j] = 1;
        if (i != 0 && j != 0) {
          int up = grid[i - 1][j];
          int left = grid[i][j - 1];
          grid[i][j] = up + left;
        }
      }
    }
    return grid[n - 1][m - 1];
  }
} ;