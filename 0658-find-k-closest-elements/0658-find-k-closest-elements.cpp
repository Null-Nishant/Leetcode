class Solution {
public:
    struct Compare {
        bool operator()(pair<int,int> a, pair<int,int> b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second;
        }
    };

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;

        for (int i : arr) {
            pq.push({i, abs(i - x)});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        vector<int> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};