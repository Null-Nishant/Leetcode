class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            int reverseValue = 26 - (s[i] - 'a');

            sum += (i + 1) * reverseValue;
        }

        return sum;
    }
};

// 'a' -'0' 27-1
// 'b'-'0'  27-2

// ch-'0'
// 'z'-'0'  27-26