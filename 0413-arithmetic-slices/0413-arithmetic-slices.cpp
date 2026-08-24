class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return 0;
        }
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n - 2; i++) {
            int first = nums[i];
            int second = nums[i + 1];
            int third = nums[i + 2];
            if (second - first == third - second) {
                count++;
                ans+=count;
            }
            else{
                count=0;
            }
        }
        return ans;
    }
};