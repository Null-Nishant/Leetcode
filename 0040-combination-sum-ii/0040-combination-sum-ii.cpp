class Solution {
public:
    void helper(int index,vector<int>&arr,int t,vector<int>&ans,vector<vector<int>>&res){
        if(t==0){
            res.push_back(ans);
            return;
        }
        if(index==arr.size() || t<0){
            return ;
        }
        ans.push_back(arr[index]);
        helper(index+1,arr,t-arr[index],ans,res);
        ans.pop_back();
        int j=index+1;
        while(j < arr.size() && arr[index]==arr[j]){
            j++;
        }
        helper(j,arr,t,ans,res);
        return ;
    }    
    vector<vector<int>> combinationSum2(vector<int>& arr, int t) {
        vector<vector<int>>res;
        sort(begin(arr),end(arr));
        vector<int>ans;
        helper(0,arr,t,ans,res);
        return res;
    }
};