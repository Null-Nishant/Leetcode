class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        vector<int> mp(2, 0);
        int ans=0;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
            while (mp[0] == 1) {
                mp[nums[low]]--;
                low++;
            }
            ans=max(ans,mp[1]);
        }
        return ans;
    }
};