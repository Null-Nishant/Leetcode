class Solution {
public:
    bool checkDivisibility(int n) {
        // easy problem
        int digitProduct = 1;
        int digitSum = 0;
        int temp = n;
        while (n) {
            int digit = n % 10;
            digitProduct *= digit;
            digitSum += digit;
            n /= 10;
        }
        return temp%(digitProduct+digitSum)==0?true:false;
    }
};