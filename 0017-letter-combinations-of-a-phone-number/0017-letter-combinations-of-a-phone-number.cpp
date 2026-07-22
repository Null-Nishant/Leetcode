class Solution {
public:
    vector<string> ans;

    void helper(int index, string &digits,
                vector<string> &mapping,
                string &curr)
    {
        if(index == digits.size())
        {
            ans.push_back(curr);
            return;
        }

        string letters = mapping[digits[index]-'0'];

        for(char ch : letters)
        {
            curr.push_back(ch);        // Choose

            helper(index+1, digits, mapping, curr); // Explore

            curr.pop_back();           // Undo
        }
    }

    vector<string> letterCombinations(string digits) {

        if(digits.empty())
            return {};

        vector<string> mapping =
        {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs",
            "tuv", "wxyz"
        };

        string curr;

        helper(0, digits, mapping, curr);

        return ans;
    }
};