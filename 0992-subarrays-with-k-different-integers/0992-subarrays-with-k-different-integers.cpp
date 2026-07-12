class Solution {
public:
    int atmostK(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int low=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                mp[nums[low]]--;
                if(mp[nums[low]]==0){
                    mp.erase(nums[low]);
                }
                low++;
            }
             count = count + (i - low + 1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostK(nums,k)-atmostK(nums,k-1);
    }
};