class Solution {
public:
    bool isValid(int row, int col, char choice,
                 vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {

            // row
            if (board[row][i] == choice)
                return false;

            // column
            if (board[i][col] == choice)
                return false;
        }

        // 3x3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] == choice)
                    return false;
            }
        }

        return true;
    }

    bool fillThisCell(int row, int col,
                      vector<vector<char>>& board) {

        // Sudoku completed
        if (row == 9)
            return true;

        // calculate next cell
        int nextRow = row;
        int nextCol = col + 1;

        if (nextCol == 9) {
            nextRow++;
            nextCol = 0;
        }

        // already filled cell
        if (board[row][col] != '.') {
            return fillThisCell(nextRow, nextCol, board);
        }

        // try choices
        for (char choice = '1'; choice <= '9'; choice++) {

            if (isValid(row, col, choice, board)) {

                board[row][col] = choice; // choose

                if (fillThisCell(nextRow, nextCol, board))
                    return true;

                board[row][col] = '.'; // backtrack
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        fillThisCell(0, 0, board);
    }
};