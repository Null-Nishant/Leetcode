class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=0;
        for (int i = n; i <= 100; i++) {
            int product = 1;
            int temp=i;
            while (temp) {
                int digit = temp % 10;
                temp /= 10;
                product *= digit;
            }
            if (product%t==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};