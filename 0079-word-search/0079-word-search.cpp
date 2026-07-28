class Solution {
public:
    int dr[4] = {1, -1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    bool dfs(int row, int col, int index,
             vector<vector<char>>& board,
             string& word) {
        if (index == word.size())
            return true;
        if (row < 0 || row >= board.size() ||
            col < 0 || col >= board[0].size())
            return false;
        if (board[row][col] != word[index])
            return false;
        char temp = board[row][col];
        board[row][col] = '#';
        for (int i = 0; i < 4; i++) {
            int nr = row + dr[i];
            int nc = col + dc[i];

            if (dfs(nr, nc, index + 1, board, word))
                return true;
        }
        board[row][col] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(i, j, 0, board, word))
                    return true;
            }
        }

        return false;
    }
};