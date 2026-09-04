class Solution {
public:
    void helper(int index, vector<int>& candidates, int target,
                vector<int>& temp, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (index >= candidates.size())
            return;

        for (int i = index; i < candidates.size(); i++) {

            if (candidates[i] > target)
                continue;

            temp.push_back(candidates[i]);

            helper(i, candidates, target - candidates[i], temp, ans);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> temp;
        vector<vector<int>> ans;

        helper(0, candidates, target, temp, ans);

        return ans;
    }
};