class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minip = -1, mini = INT_MAX;
        int maxip = -1, maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (maxi < nums[i]) {
                maxi = nums[i]; 
                maxip = i;
            }
            if (mini > nums[i]) {
                mini = nums[i];
                minip = i;
            }
        }
        int left = min(minip, maxip);
        int right = max(minip, maxip);
        return min({right+1,n-left,(left+1)+(n-right)});
    }
};