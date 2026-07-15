class Solution {
public:
    void helper(int index,vector<int>& nums,vector<vector<int>>&ans,vector<int>&res){
        if(index==nums.size()){
            ans.push_back(res);
            return ;
        }
        res.push_back(nums[index]);
        int j=index;

        helper(j+1,nums,ans,res);
        res.pop_back();
        for(int i=index+1;i<nums.size();i++){
            if(nums[i]==nums[index]){
                j++;
            }
        }
        helper(j+1,nums,ans,res);
        return ;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        sort(nums.begin(),nums.end());
        helper(0,nums,ans,res);
        return ans;
    }
};