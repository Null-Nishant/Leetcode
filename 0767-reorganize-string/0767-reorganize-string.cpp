class Solution {
public:
    class Compare {
    public:
        bool operator()(const pair<char, int>& a,
                        const pair<char, int>& b) {
            return a.second < b.second;
        }
    };

    string reorganizeString(string s) {

        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        priority_queue<
            pair<char, int>,
            vector<pair<char, int>>,
            Compare
        > pq;

        for (auto& it : mp) {
            pq.push({it.first, it.second});
        }

        string ans = "";

        while (pq.size() >= 2) {

            pair<char, int> first = pq.top();
            pq.pop();

            pair<char, int> second = pq.top();
            pq.pop();

            ans += first.first;
            ans += second.first;

            first.second--;
            second.second--;

            if (first.second > 0) {
                pq.push(first);
            }

            if (second.second > 0) {
                pq.push(second);
            }
        }

        // One character may remain
        if (!pq.empty()) {

            auto last = pq.top();

            if (last.second > 1) {
                return "";
            }

            ans += last.first;
        }

        return ans;
    }
};