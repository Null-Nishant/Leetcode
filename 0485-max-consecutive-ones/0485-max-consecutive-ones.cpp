class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0;
        int ans=0;
        for(int i:nums){
            if(i){
                curr+=1;
            }
            else{
                curr=0;
            }
            ans=max(curr,ans);
        }
        return ans;
    }
};