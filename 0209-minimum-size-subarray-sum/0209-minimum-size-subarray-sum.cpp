class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int low=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(target<=sum){
            ans=min(ans,i-low+1);
                sum-=nums[low];
                low++;
            }
        
        }
        return ans==INT_MAX?0:ans;
    }
};