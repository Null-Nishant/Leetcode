class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> mp(2, 0);
        int low = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            while (mp[0] > 1) {
                mp[nums[low]]--;
                low++;
            }
            ans = max(ans, i - low + 1);
        }
        return ans-1;
    }
};