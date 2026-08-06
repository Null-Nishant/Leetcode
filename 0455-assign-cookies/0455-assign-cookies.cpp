class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int first = 0;
        int second = 0;
        int count = 0;
        while (first < g.size() && second < s.size()) {
            if (g[first] <= s[second]) {
                count++;
                first++;
                second++;
            } else {
                second++;
            }
        }
        return count;
    }
};

// 7 8 9 10 5 6 7 8