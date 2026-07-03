class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // o(n2) give tle
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //     if(sum==goal) ans++;
        //     }
        // }
        // return ans;
       int n = nums.size();
        int result = 0;
        int prefixSum = 0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i=0; i<n; i++){
            prefixSum += nums[i];
            result += mp[prefixSum - goal];
            mp[prefixSum]++;
        }
        return result;
    }
};