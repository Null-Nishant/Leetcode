class Solution {
public:
    void helper(int l, int r, vector<int> arr, vector<bool>& ans) {
        if (l > r || l > arr.size()) {
            ans.push_back(false);
            return;
        }
        vector<int> temp;
        for (int i = l; i <= r; i++) {
            temp.push_back(arr[i]);
        }
        sort(temp.begin(), temp.end());
        for (int i = 0; i < temp.size() - 2; i++) {
            if (temp[i + 1] - temp[i] != temp[i + 2] - temp[i + 1]) {
                ans.push_back(false);
                return;
            }
        }
        ans.push_back(true);
        return;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l,
                                          vector<int>& r) {
        vector<bool> ans;
        for (int i = 0; i < l.size(); i++) {
            helper(l[i], r[i], nums, ans);
        }
        return ans;
    }
};