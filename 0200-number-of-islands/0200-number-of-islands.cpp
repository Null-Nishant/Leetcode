class Solution {
public:
    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    void dfs(int row, int col, vector<vector<char>>& grid) {

        if (row < 0 || row >= grid.size() ||
            col < 0 || col >= grid[0].size() ||
            grid[row][col] == '0')
            return;

        // Mark visited
        grid[row][col] = '0';

        for (int i = 0; i < 4; i++) {
            dfs(row + dr[i], col + dc[i], grid);
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        int rows = grid.size();
        int cols = grid[0].size();

        int islands = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (grid[i][j] == '1') {
                    islands++;
                    dfs(i, j, grid);
                }
            }
        }

        return islands;
    }
};