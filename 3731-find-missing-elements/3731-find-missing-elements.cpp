class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for (int num : nums) {
            largest = max(num, largest);
            smallest = min(num, smallest);
        }
        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = smallest + 1; i < largest; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};