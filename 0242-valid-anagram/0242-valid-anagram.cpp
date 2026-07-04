class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>mp(26,0);
        for(char ch: s){
            mp[ch-'a']++;
        }
        for(char ch: t){
            mp[ch-'a']--;
        }
        for(int i:mp){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};