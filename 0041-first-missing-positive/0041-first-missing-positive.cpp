class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if (nums[i]<=0){
            i++;
            continue;}
            if (nums[i]>nums.size()){
            i++;
            continue;}
            if (nums[i]!=nums[nums[i]-1]){
            swap(nums[i],nums[nums[i]-1]);
            continue;}
            else i++;
        }
        int k=1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=k)
            return k;
            else k++;
        }
        return nums.size()+1;
    }
};