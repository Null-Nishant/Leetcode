class Solution {
public:
    int helper(int start, int end, vector<int>& nums) {
        int ans = 1;
        for (int i = start + 1; i <= end; i++) {
            if (nums[i] > nums[i - 1]) {
                ans++;
            }
            else {
                break;
            }
        }

        int ans1 = 1;
        for (int i = start + 1; i <= end; i++) {
            if (nums[i] < nums[i - 1]) {
                ans1++;
            }
            else {
                break;
            }
        }

        return max(ans, ans1);
    }

    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                ans = max(ans, helper(j, i, nums));
            }
        }

        return ans;
    }
};