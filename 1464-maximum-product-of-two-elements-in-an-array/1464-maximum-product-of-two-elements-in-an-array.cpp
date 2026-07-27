class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // o(nlogn)
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // return (nums[n - 1] - 1) * (nums[n - 2] - 1);

        int n=nums.size();
        int firstMax=INT_MIN;
        int secondMax=INT_MIN;
        for(int i:nums){
            if(i>firstMax){
                secondMax=firstMax;
                firstMax=i;
            }
            else if(firstMax==secondMax){
                secondMax=firstMax;
            }
            else if(i>secondMax){
                secondMax=i;
            }
        }
        return (firstMax-1)*(secondMax-1);
    }
};