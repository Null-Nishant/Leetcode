class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int low=0;
        unordered_map<char,int>mp;
        int ans=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            maxi=max(maxi,mp[s[i]]);
            while((i-low+1)-maxi>k){
                mp[s[low]]--;
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans;
    }
};