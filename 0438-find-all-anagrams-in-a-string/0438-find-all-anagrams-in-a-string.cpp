class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if (p.size() > s.size())
            return {};

        unordered_map<char, int> mp1, mp2;
        vector<int> ans;

        for (char ch : p)
            mp1[ch]++;

        for (int i = 0; i < p.size(); i++)
            mp2[s[i]]++;

        if (mp1 == mp2)
            ans.push_back(0);

        for (int i = p.size(); i < s.size(); i++) {

            mp2[s[i - p.size()]]--;

            if (mp2[s[i - p.size()]] == 0)
                mp2.erase(s[i - p.size()]);

            mp2[s[i]]++;

            if (mp1 == mp2)
                ans.push_back(i - p.size() + 1);
        }

        return ans;
    }
};