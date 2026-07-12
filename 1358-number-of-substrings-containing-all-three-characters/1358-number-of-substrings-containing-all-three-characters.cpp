class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>mp(3,0);
        int n=s.size();
        int low=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[s[i]-'a']++;
            while(mp[0]>0 && mp[1]>0 && mp[2]>0){
                ans+=n-i;
                mp[s[low]-'a']--;
                low++;
            }
        }
        return ans;
    }
};