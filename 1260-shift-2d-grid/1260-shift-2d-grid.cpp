class Solution {
public:
    void shiftby1(vector<vector<int>>& grid, int row, int col) {
    int last = grid[row-1][col-1];

    for (int i = row-1; i >= 0; i--) {
        for (int j = col-1; j >= 0; j--) {

            if (i == 0 && j == 0)
                continue;

            if (j == 0)
                grid[i][j] = grid[i-1][col-1];
            else
                grid[i][j] = grid[i][j-1];
        }
    }

    grid[0][0] = last;
}
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size();
        int col=grid[0].size();
        k=k%(row*col);
        for(int i=0;i<k;i++){   //o(k*n2)
            shiftby1(grid,row,col);
        }
        return grid;
    }
};