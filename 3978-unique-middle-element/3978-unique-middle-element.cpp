class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()/2 && nums[i]==nums[nums.size()/2]){
                return false;
            }
        }
        return true;
    }
};