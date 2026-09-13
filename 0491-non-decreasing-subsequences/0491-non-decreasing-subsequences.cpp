class Solution {
public:
    void solver(int index, vector<vector<int>>& ans, vector<int>& path, vector<int>& nums) {
        if (path.size() > 1) {
            ans.push_back(path);
        }
        
        unordered_set<int> used;
        for (int i = index; i < nums.size(); i++) {
            // Skip duplicates at the same recursion level
            if (used.count(nums[i])) continue;
            
            // Ensure non-decreasing order
            if (!path.empty() && path.back() > nums[i]) continue;
            
            used.insert(nums[i]);
            path.push_back(nums[i]);
            solver(i + 1, ans, path, nums);
            path.pop_back();
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> path;
        vector<vector<int>> ans;
        solver(0, ans, path, nums);
        return ans;
    }
};