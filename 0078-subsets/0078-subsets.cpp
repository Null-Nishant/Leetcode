class Solution {
public:
void helper(int index,vector<int>&sub,vector<int>&nums,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(sub);
        return ;
    }
    sub.push_back(nums[index]);
    helper(index+1,sub,nums,ans);
    sub.pop_back();
    helper(index+1,sub,nums,ans);
    return;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        helper(0,sub,nums,ans);
        return ans;
    }
};