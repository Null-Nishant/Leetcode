class Solution {
public:
    bool isPalindromic(string s) {

        string bitword = "";

        for (char ch : s) {
            bitset<8> b(ch);
            bitword += b.to_string();
        }

        int low = 0;
        int high = bitword.size() - 1;

        while (low < high) {
            if (bitword[low] != bitword[high]) {
                return false;
            }

            low++;
            high--;
        }

        return true;
    }
};