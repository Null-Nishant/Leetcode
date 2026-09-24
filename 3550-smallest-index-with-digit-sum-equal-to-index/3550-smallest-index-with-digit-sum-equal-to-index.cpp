class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]){
                int digit=nums[i]%10;
                nums[i]/=10;
                sum+=digit;
            }
            if(sum==i){
                ans=min(i,ans);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};