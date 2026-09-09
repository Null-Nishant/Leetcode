class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);
        if (s[0] == '0') {
            return 0;
        }
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            int one = 0;
            int two = 0;
            if (s[i - 2] != '0') {
                int twoDigits = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
                if (twoDigits < 27 && twoDigits > 0) {
                    two = dp[i - 2];
                }
            }
            if (s[i - 1] != '0') {
                one = dp[i - 1];
            }
            dp[i]=one+two;
        }
        return dp[n];
    }
};