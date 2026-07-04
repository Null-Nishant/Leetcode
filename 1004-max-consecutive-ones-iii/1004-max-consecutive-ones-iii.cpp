class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        vector<int>mp(2,0);
        int low=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[0]>k){
                mp[nums[low]]--;
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans;
    }
};