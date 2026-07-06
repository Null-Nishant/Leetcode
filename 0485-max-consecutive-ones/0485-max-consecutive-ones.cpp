class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int ans=INT_MIN;
        vector<int>mp(2,0);
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[0]){
                mp[nums[low]]--;
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans;
    }
};