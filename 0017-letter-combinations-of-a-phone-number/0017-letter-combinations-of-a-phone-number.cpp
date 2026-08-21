class Solution {
public:
    void helper(int index, string& digits, string path, vector<string>& map,
                vector<string>& ans) {
        if (index >= digits.size()) {
            ans.push_back(path);
            return;
        }
        for (int i = 0; i < map[digits[index] - '0'].size(); i++) {
            path+=map[digits[index]-'0'][i];
            helper(index+1, digits, path, map, ans);
            path.pop_back();
        }
        return ;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> map = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string path = "";
        vector<string> ans;
        helper(0, digits, path, map, ans);
        return ans;
    }
};