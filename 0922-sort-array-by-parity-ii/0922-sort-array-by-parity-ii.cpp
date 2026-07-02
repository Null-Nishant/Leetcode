class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low<nums.size() && high>=0){
            while(low<nums.size() && nums[low]%2==0){
                low+=2;
            }
            while(high>=0 && nums[high]%2!=0){
                high-=2;
            }
            if (low < nums.size() && high >= 0) {
                swap(nums[low], nums[high]);
            }
        }
        return nums;
    }
};