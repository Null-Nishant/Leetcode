class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // o(n2)
        // int n=nums.size();
        // int ans=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         ans=max(ans,sum);
        //     }
        // }
        // return ans;

        int curr=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=max(nums[i],nums[i]+curr);
            ans=max(ans,curr);
        }
        return ans;
    }
};