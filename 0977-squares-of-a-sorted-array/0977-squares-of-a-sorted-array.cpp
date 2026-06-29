class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int low=0,high=nums.size()-1;
        while(low<=high){
            if(abs(nums[low])<abs(nums[high])){
                ans.push_back(nums[high]*nums[high]);
                high--;
            }
            else{
                ans.push_back(nums[low]*nums[low]);
                low++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};