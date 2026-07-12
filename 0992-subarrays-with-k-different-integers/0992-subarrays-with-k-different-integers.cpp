class Solution {
public:
    int atMost(vector<int> nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        int low = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
            while (freq.size() > k) {
                freq[nums[low]]--;
                if (freq[nums[low]] == 0) {
                    freq.erase(nums[low]);
                }
                low++;
            }
            ans = ans + (i - low + 1);
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};