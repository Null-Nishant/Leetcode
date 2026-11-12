
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr(n + 2, 0);

        for (auto booking : bookings) {
            int start = booking[0];
            int end = booking[1];
            int seats = booking[2];

            arr[start] += seats;
            arr[end + 1] -= seats;
        }

        int sum = 0;
        vector<int> ans;

        for (int i = 1; i <= n; i++) {
            sum += arr[i];
            ans.push_back(sum);
        }

        return ans;
    }
};
