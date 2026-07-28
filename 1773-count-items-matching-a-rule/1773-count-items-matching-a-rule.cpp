class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey,
                     string ruleValue) {
        int searchIndex = -1;
        if (ruleKey == "color") {
            searchIndex = 1;
        }
        if (ruleKey == "type") {
            searchIndex = 0;
        }
        if (ruleKey == "name") {
            searchIndex = 2;
        }
        int count = 0;
        for (auto item : items) {
            if (item[searchIndex] == ruleValue)
                count++;
        }
        return count;
    }
};