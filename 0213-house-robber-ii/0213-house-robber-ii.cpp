class Solution {
public:
    vector<int> memo;
    
    int solve(vector<int>& nums, int start, int end, int index) {
        // Base Case (Backward)
        if(index < start) return 0;
        if(index == start) return nums[start];
        
        // Memoization Check
        if(memo[index] != -1) return memo[index];
        
        // Choices + Transition (Backward)
        int skip = solve(nums, start, end, index - 1);
        int take = nums[index] + solve(nums, start, end, index - 2);
        
        return memo[index] = max(skip, take);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        
        // Case 1: Pehla house skip
        memo.assign(n, -1);
        int case1 = solve(nums, 1, n-1, n-1);
        
        // Case 2: Aakhri house skip
        memo.assign(n, -1);
        int case2 = solve(nums, 0, n-2, n-2);
        
        return max(case1, case2);
    }
};