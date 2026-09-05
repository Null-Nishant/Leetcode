class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // o(n2) give tle
        // for(int i=0;i<nums.size();i++){
        //     int maxi=*max_element(nums.begin(),nums.begin()+i);
        //     int mini=*min_element(nums.begin()+i,nums.end());
        //     if(maxi-mini<=k){
        //         return i;
        //     }
        // }
        // return -1;
        // the thing i am repeating is calculating maxi and mini again and again
        //precompute them
        int maxi=INT_MIN;
        int n=nums.size();
        vector<int>suff(n);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=min(nums[i],suff[i+1]);
        }
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            if(maxi-suff[i]<=k){
                return i;
            }
        }
        return -1;
    }
};