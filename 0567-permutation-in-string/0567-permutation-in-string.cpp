class Solution {
public:
    bool isValid(vector<int> mp1, vector<int> mp2) {
        for (int i = 0; i < mp1.size(); i++) {
            if (mp1[i] != mp2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        // approach kya hoga
        int n = s1.size();
        int m = s2.size();
        if(n>m) return false;
        vector<int> mp1(26, 0);
        vector<int> mp2(26, 0);
        for (char ch : s1)
            mp1[ch - 'a']++;
        for (int i = 0; i < n; i++) {
            mp2[s2[i] - 'a']++;
        }
        if (isValid(mp1, mp2))
            return true;
        for (int i = n; i < m; i++) {
            mp2[s2[i-n] - 'a']--;
            mp2[s2[i] - 'a']++;
            if (isValid(mp1, mp2))
                return true;
        }
        return false;
    }
};