class Solution {
public:
    int helper(int start, int end, vector<int>& nums) {
        int ans = 1;
        for (int i = start + 1; i <= end; i++) {
            if (nums[i] > nums[i - 1]) {
                ans++;
            } else {
                break;
            }
        }

        int ans1 = 1;
        for (int i = start + 1; i <= end; i++) {
            if (nums[i] < nums[i - 1]) {
                ans1++;
            } else {
                break;
            }
        }

        return max(ans, ans1);
    }

    int longestMonotonicSubarray(vector<int>& nums) {
        int decrease = 1;
        int increase = 1;
        int ans=1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                increase++;
                decrease = 1;
            } else if (nums[i] < nums[i - 1]) {
                increase = 1;
                decrease++;
            }
            else{
                increase=1;
                decrease=1;
            }
            ans=max({ans,increase,decrease});
        }
        return ans;
    }
};