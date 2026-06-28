class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        long long sum=0;
        for(int i:nums){
            sum+=i;
        }
        long long left=0,right=sum;
        for(int i=0;i<n-1;i++){
            right-=nums[i];
            left+=nums[i];
            if(left>=right){
                ans++;
            }
        }
        return ans;
    }
};