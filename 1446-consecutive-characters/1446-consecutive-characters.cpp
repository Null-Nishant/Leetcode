class Solution {
public:
    int maxPower(string s) {
        unordered_map<char, int> mp;
        int n = s.size();
        int ans = 0;
        int low = 0;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            while (mp.size() > 1) {
                mp[s[low]]--;
                if (mp[s[low]] == 0) {
                    mp.erase(s[low]);
                }
                low++;
            }
            ans = max(ans, i - low + 1);
        }
        return ans;
    }
};