#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(1, k, n, path, result);  // startNum = 1
        return result;
    }

private:
    void backtrack(int startNum, int remainingK, int remainingSum,
                   vector<int>& path, vector<vector<int>>& result) {
        // 4. Termination conditions
        if (remainingK == 0 && remainingSum == 0) {
            result.push_back(path);    // success
            return;
        }
        if (remainingK == 0 || remainingSum <= 0 || startNum > 9) {
            return;                    // dead end, prune
        }

        // 2. Choices: try each number from startNum to 9
        for (int i = startNum; i <= 9; ++i) {
            // pruning: if this number alone exceeds remaining sum, break
            // if (i > remainingSum) break;

            // 3. Transform state & make choice
            path.push_back(i);
            backtrack(i + 1, remainingK - 1, remainingSum - i, path, result);
            path.pop_back();           // 5. Undo the choice
        }
    }
};