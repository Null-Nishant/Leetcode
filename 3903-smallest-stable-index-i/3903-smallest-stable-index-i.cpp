class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // o(n2)
        int ans=-1; 
        for(int i=0;i<nums.size();i++){
            int maxi=*max_element(nums.begin(),nums.begin()+i+1);
            int mini=*min_element(nums.begin()+i,nums.end());
            int instability=maxi-mini;
            if(instability<=k){
                return i;
            }
        }
        return -1;
    }
};