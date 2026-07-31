class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int arrows = 1;
        int prevStart = points[0][0];
        int prevEnd = points[0][1];
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] <= prevEnd) {
                prevStart = max(points[i][0], prevStart);
                prevEnd = min(points[i][1], prevEnd);
            }
            else{
                arrows++;
                prevStart=points[i][0];
                prevEnd=points[i][1];
            }
        }
        return arrows;
    }
};