class Solution {
public:
    bool helper(int mid, vector<int>& nums, int threshold) {
        int sum = 0;
        for (int i : nums) {
                sum += (i + mid - 1) / mid;
            if (sum > threshold)
                return false;
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (helper(mid, nums, threshold)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};