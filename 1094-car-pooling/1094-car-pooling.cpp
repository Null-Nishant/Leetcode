class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int, int>> event;
        for (auto trip : trips) {
            event.push_back({trip[1], trip[0]});
            event.push_back({trip[2], -trip[0]});
        }
        sort(event.begin(), event.end());
        int curr = 0;
        for (auto ev : event) {
            curr += ev.second;
            if (curr > capacity) {
                return false;
            }
        }
        return true;
    }
};