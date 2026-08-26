class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp.size()<i-low+1){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans;
    }
};