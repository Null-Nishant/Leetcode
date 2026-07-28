class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;
        while (low < high) {
            if (s[low] != s[high]) {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    void helper(int index, string s, vector<string>& p) {
        if (index == s.size()) {
            if (isPalindrome(s)) {
                p.push_back(s);
            }
            return;
        }
        for (int i = index; i < s.size(); i++) {
            swap(s[index], s[i]);
            helper(index + 1, s, p);
            swap(s[index], s[i]);
        }
        return;
    }
    string smallestPalindrome(string s) {
        // vector<string> p;
        // helper(0, s, p);
        // sort(p.begin(), p.end());
        // return p[0];
        int n =s.size();
        int mid = n / 2;
        sort(s.begin(), s.begin() + mid);
        for (int i = 0; i < mid; i++) {
            s[n - 1 - i] = s[i];
        }
        return s;
    }
};