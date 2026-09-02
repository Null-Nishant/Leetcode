class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        //odd+odd=even
        //2n+1+2n+1=4n+2
        //odd+even=odd
        //even+even=even
        //if the array contain only odd then it is true
        // if the array contain only even then it is also true;
        //if the array contain odd and even then it is also true because i will create the nums2 array which contain only odd
        return true;

    }
};