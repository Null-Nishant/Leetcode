class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int ans=INT_MIN;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans==INT_MIN?0:ans;
    }
};