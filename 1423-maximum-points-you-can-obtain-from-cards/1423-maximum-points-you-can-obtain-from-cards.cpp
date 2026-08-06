class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        int ans = 0;
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }
        ans = max(ans, sum);
        for (int i = 0; i < k; i++) {
            sum -= cardPoints[k - i - 1];
            sum += cardPoints[n - 1 - i];
            ans = max(ans, sum);
        }
        return ans;
    }
};