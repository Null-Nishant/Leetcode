class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum+k<i-low+1){
                sum-=nums[low];
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans;
    }
};