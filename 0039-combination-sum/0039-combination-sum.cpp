class Solution {
public:
    void solver(int index, vector<int>& path, vector<vector<int>>& ans,
                int target, vector<int>& arr) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }
        for (int i = index; i < arr.size(); i++) {
            if (target < arr[i]){
                continue;
            }
            path.push_back(arr[i]);
            solver(i, path, ans, target - arr[i], arr);
            path.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        solver(0, path, ans, target, arr);
        return ans;
    }
};


    

