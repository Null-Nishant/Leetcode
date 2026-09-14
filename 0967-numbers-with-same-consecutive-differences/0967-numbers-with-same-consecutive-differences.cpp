class Solution {
public:
    void solver(int path, vector<int>& ans, int n, int k) {

        if (path != 0 && (int)log10(path) + 1 == n) {
            ans.push_back(path);
            return;
        }
        for (int i = 0; i <= 9; i++) {
            if (path == 0 && i == 0)
                continue;
            if (path != 0 && abs(path % 10 - i) != k)
                continue;
            path = path * 10 + i;
            solver(path, ans, n, k);
            path /= 10;
        }
        return;
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        int path = 0;
        solver(path, ans, n, k);
        return ans;
    }
};