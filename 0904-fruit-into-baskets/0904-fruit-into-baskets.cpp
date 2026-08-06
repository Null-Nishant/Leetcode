class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int ans=0;
        unordered_map<int,int>mp;
        int low=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            while(mp.size()>2){
                mp[arr[low]]--;
                if(mp[arr[low]]==0){
                    mp.erase(arr[low]);
                }
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans;
    }
};