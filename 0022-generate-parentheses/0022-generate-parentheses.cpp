class Solution {
public:
    void tryCombinations(int open, int close, vector<string>& res, string &str) {
        if (open == 0 && close == 0) {
            res.push_back(str);
            return;
        }

        if (open > 0) {
            str.push_back('(');
            tryCombinations(open - 1, close, res, str);
            str.pop_back();
        }

        if (close > open) {
            str.push_back(')');
            tryCombinations(open, close - 1, res, str);
            str.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string str;
        tryCombinations(n, n, res, str);
        return res;
    }
};