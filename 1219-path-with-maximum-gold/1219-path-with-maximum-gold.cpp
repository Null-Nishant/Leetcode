class Solution {
public:
    int solver(int r, int c, int amount, vector<vector<int>>& grid) {

        if (r < 0 || c < 0 ||
            r >= grid.size() || c >= grid[0].size() ||
            grid[r][c] == 0) {
            return amount;
        }

        int original = grid[r][c];

        // collect current gold
        amount += original;

        // mark visited
        grid[r][c] = 0;

        int best = max({
            solver(r + 1, c, amount, grid),
            solver(r - 1, c, amount, grid),
            solver(r, c + 1, amount, grid),
            solver(r, c - 1, amount, grid)
        });

        // backtrack
        grid[r][c] = original;

        return best;
    }

    int getMaximumGold(vector<vector<int>>& grid) {

        int ans = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {

                if (grid[i][j] != 0) {
                    ans = max(ans, solver(i, j, 0, grid));
                }
            }
        }

        return ans;
    }
};