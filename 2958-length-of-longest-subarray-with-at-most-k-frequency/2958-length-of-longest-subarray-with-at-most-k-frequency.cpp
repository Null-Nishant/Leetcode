class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low=0;
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                mp[nums[low]]--;
                if(mp[nums[low]]==0){
                    mp.erase(nums[low]);
                }
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans;
    }
};