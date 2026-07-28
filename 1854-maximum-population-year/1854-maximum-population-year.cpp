class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<pair<int, int>> event;
        for (auto i : logs) {
            event.push_back({i[0], 1});
            event.push_back({i[1], -1});
        }
        sort(event.begin(), event.end());
        int curr = 0;
        int maxi = INT_MIN;
        int ans = 0;
        for (auto i : event) {
            curr += i.second;
            if (curr > maxi) {
                maxi = curr;
                ans = i.first;
            }
        }
        return ans;
    }
};