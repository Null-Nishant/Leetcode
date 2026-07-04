class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=nums[0];
        int vote=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==curr){
                vote++;
            }
            else if(vote==0){
                curr=nums[i];
                vote++;
            }
            else{
                vote--;
            }
        }
        return curr;
    }
};