class Solution {
public:
    int maxProfit(vector<int>& nums) {
        //o(n2)
        int n=nums.size();
        if(n<2){
            return 0;
        }
        int l=0,r=1;
        int ans=0;
        while(r<n){
            if(nums[l]<=nums[r]){
                ans=max(ans,nums[r]-nums[l]);
            }
            else{
                l=r;
            }
            r++;
        }
        return ans;
    }
};