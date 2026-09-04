class Solution {
public:
    void solver(int index,int n, int k, vector<int>& path, vector<vector<int>>& ans) {
        if (path.size() >= k) {
            ans.push_back(path);
            return;
        }
        for (int i = index; i <= n; i++) {
            path.push_back(i);
            solver(i+1,n, k, path, ans);
            path.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        // approach
        vector<int> path;
        vector<vector<int>> ans;
        solver(1,n, k, path, ans);
        return ans;
    }
};