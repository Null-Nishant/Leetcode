class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n == 1) {
            return 0;
        }
        int half=pow(2,n-2);
        if(half>=k){
            return kthGrammar(n-1,k);
        }
        return 1-kthGrammar(n-1,k-half);
    }
};