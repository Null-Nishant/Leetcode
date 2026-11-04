class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int left = 0;
        int right = col-1;
        int up = 0;
        int down = row-1;
        while (up<=down && left<=right) {
            // left--->right
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[up][i]);
            }
            up++;
            // up--->down
            for (int i = up; i <= down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // right-->left
              if (up <= down) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[down][i]);
            }
            down--;
              }
            // down--->up
             if (left <= right) {
            for (int i = down; i >= up; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
             }
        }
        return ans;
    }
};