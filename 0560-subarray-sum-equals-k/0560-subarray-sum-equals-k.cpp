class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<long long, int> mp;
        long long sum = 0;
        mp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int target = sum - k;
            if (mp.find(target) != mp.end()) {
                count += mp[target];
            }
            mp[sum]++;
        }
        return count;
    }
};