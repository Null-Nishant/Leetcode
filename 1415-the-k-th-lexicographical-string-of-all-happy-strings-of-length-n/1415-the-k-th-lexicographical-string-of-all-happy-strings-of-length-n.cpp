class Solution {
public:
    void solver(int index, vector<char>& ch, string &ans, string& path, int n,int& k) {
        if (path.size() == n) {
            k--;
            if (k == 0) {
                ans = path;
            }
            return;
        }
        for (int i = 0; i < ch.size(); i++) {
            if(!path.empty() && path.back()==ch[i]) continue;
            path.push_back(ch[i]);
            solver(i + 1, ch, ans, path, n, k);
            path.pop_back();
        }
        return;
    }
    string getHappyString(int n, int k) {
        vector<char> ch = {'a', 'b', 'c'};
        string ans = "";
        string path = "";
        solver(0, ch, ans, path, n, k);
        return ans;
    }
};