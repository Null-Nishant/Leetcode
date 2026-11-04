class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int count = 1;
        int row = n;
        int col = n;
        int left = 0;
        int right = n;
        int top = 0;
        int bottom = n;
        while (top < bottom && left < right) {
            // left-->right
            for (int i = left; i < right; i++) {
                mat[top][i] = count;
                count++;
            }
            top++;

            // top-->bottom
            for (int i = top; i < bottom; i++) {
                mat[i][right-1] = count;
                count++;
            }
            right--;

            // right-->left
                 if (top < bottom) {
            for (int i = right-1; i>= left; i--) {
                mat[bottom-1][i] = count;
                count++;
            }
            bottom--;
            }
            // bottom -->up
            if (left < right) {
            for (int i = bottom-1; i >= top; i--) {
                mat[i][left] = count;
                count++;
            }
            left++;
            }
        }
        return mat;
    }
};