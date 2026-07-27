class Solution {
public:
    void helper(int index, vector<int>& nums, vector<vector<int>>& ans,
                vector<int>& res) {
        if (index == nums.size()) {
            ans.push_back(res);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            res.push_back(nums[index]);
            helper(index + 1, nums, ans, res);
            res.pop_back();
            swap(nums[index],nums[i]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        helper(0, nums, ans, res);
        return ans;
    }
};