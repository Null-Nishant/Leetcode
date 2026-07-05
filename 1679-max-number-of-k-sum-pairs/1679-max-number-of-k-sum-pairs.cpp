class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        int ans=0;
        while(low<high){
            int sum=nums[low]+nums[high];
            if(sum==k){
                ans++;
                low++,high--;
            }
            else if(sum<k){
                low++;
            }
            else{
                high--;
            }
        }
        return ans;
    }
};