class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long count = 0;
        if(n<0){
            return false;
        }
        while (n) {
            n = n & (n - 1);
            count++;
        }
        return count==1;
    }
};