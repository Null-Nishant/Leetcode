class Solution {
public:
    int helper(int index, vector<int>& nums, int target) {
       if (index == nums.size()) {
            return target == 0 ? 1 : 0;
        }
        int pos = helper(index + 1, nums, target - nums[index]);
        int neg = helper(index + 1, nums, target + nums[index]);
        return pos + neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = helper(0, nums, target);
        return ans;
    }
};