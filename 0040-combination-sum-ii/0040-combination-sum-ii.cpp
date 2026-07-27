class Solution {
public:
    void helper(int index, vector<int>& arr, int target, vector<int>& path,
                vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(path);
            return;
        }
        if (index == arr.size() || target < 0) {
            return;
        }
        for (int i = index; i < arr.size(); i++) {
            if (i>index && arr[i] == arr[i - 1]) {
                continue;
            }
            path.push_back(arr[i]);
            helper(i + 1, arr, target - arr[i], path, ans);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {

        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        vector<int> path;

        helper(0, arr, target, path, ans);

        return ans;
    }
};