class Solution {
public:
    void helper(int index, vector<int>& arr, int& ans, vector<int>& path) {
        if (index == arr.size()) {
            int Xor = 0;
            for (int i : path) {
                Xor ^= i;
            }
            ans+= Xor;
            return ;
        }
        path.push_back(arr[index]);
        helper(index + 1, arr, ans, path);
        path.pop_back();
        helper(index + 1, arr, ans, path);
    }
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        vector<int> path;
        helper(0, nums, ans, path);
        return ans;
    }
};