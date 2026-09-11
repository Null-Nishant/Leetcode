class Solution {
public:

    void solver(int index,
                vector<int>& nums,
                vector<int>& path,
                vector<vector<int>>& ans) {

        if (path.size() >= 2) {
            ans.push_back(path);
        }

        unordered_set<int> used;

        for (int i = index; i < nums.size(); i++) {

            // same recursion level duplicate
            if (used.count(nums[i])) {
                continue;
            }

            // maintain non-decreasing order
            if (!path.empty() && nums[i] < path.back()) {
                continue;
            }

            used.insert(nums[i]);

            path.push_back(nums[i]);

            solver(i + 1, nums, path, ans);

            path.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> path;

        solver(0, nums, path, ans);

        return ans;
    }
};