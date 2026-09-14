class Solution {
public:
    void solver(int index, vector<int>& path, vector<vector<int>>& ans,
                vector<int>& nums) {
        if (path.size() >= 2) {
            ans.push_back(path);
        }
        unordered_set<int> st;
        for (int i = index; i < nums.size(); i++) {
            if (st.count(nums[i])) {
                continue;
            }
            if (!path.empty() && path.back() > nums[i]) {
                continue;
            } else {
                st.insert(nums[i]);
                path.push_back(nums[i]);
                solver(i + 1, path, ans, nums);
                path.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        solver(0, path, ans, nums);
        return ans;
    }
};