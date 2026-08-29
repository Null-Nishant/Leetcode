class Solution {
public:
    int hammingDistance(int x, int y) {
        // approach   
        int n=x^y;
        int ans=0;
        while(n){
            ans++;
            n=n&(n-1);
        }
        return ans;
    }
};