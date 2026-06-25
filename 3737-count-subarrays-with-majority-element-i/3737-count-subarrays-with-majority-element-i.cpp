class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int pref = 0;
        int ans = 0;

        mp[0] = 1;

        for (int x : nums) {
            if (x == target) pref++;
            else pref--;

            for (auto it : mp) {
                if (it.first < pref) {
                    ans += it.second;
                }
            }

            mp[pref]++;
        }

        return ans;
    }
};