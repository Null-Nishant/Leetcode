class Solution {
public:
    bool helper(int nodeNumber, int whichColor, vector<int>& color,
                vector<vector<int>>& graph) {

        if (color[nodeNumber] != -1) {
            return color[nodeNumber] == whichColor;
        }

        color[nodeNumber] = whichColor;

        for (int neighbour : graph[nodeNumber]) {
            if (!helper(neighbour, 1 - whichColor, color, graph)) {
                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);

        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (!helper(i, 0, color, graph)) {
                    return false;
                }
            }
        }

        return true;
    }
};
