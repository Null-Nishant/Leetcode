class Solution {
public:

    bool isValid(int row, int col, char choice,
                 vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {

            if (board[row][i] == choice)
                return false;

            if (board[i][col] == choice)
                return false;

            int boxRow = 3 * (row / 3) + i / 3;
            int boxCol = 3 * (col / 3) + i % 3;

            if (board[boxRow][boxCol] == choice)
                return false;
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {

        for (int row = 0; row < 9; row++) {

            for (int col = 0; col < 9; col++) {

                // empty cell mil gaya
                if (board[row][col] == '.') {

                    for (char choice = '1'; choice <= '9'; choice++) {

                        if (isValid(row, col, choice, board)) {

                            board[row][col] = choice;

                            // baaki board solve karo
                            if (solve(board))
                                return true;

                            // wrong choice -> undo
                            board[row][col] = '.';
                        }
                    }

                    // 1-9 me se kuch bhi fit nahi hua
                    return false;
                }
            }
        }

        // koi empty cell nahi mila
        // Sudoku solved
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};