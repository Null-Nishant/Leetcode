class Solution {
public:
int gcd(int a,int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i:nums){
            maxi=max(i,maxi);
            mini=min(i,mini);
        }
        return gcd(maxi,mini);
    }
};