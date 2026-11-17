class Solution {
public:
    bool helper(int penalty, vector<int>& nums, int maxOperations) {
        int operations = 0;

        for (int x : nums) {
            operations += (x - 1) / penalty;

            if (operations > maxOperations) {
                return false;
            }
        }

        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (helper(mid, nums,maxOperations)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
