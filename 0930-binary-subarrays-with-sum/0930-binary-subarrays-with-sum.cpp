class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i:nums){
            sum+=i;
            int target=sum-goal;
            count+=mp[target];
            mp[sum]++;
        }
        return count;
    }
};