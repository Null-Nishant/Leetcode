class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first=m-1;
        int second=n-1;
        int pos=nums1.size()-1;
        while(first>-1 && second>-1){
            if(nums1[first]>nums2[second]){
                nums1[pos--]=nums1[first--];
            }
            else{
                nums1[pos--]=nums2[second--];
            }
        }
        while(first>-1){
            nums1[pos--]=nums1[first--];
        }
         while(second>-1){
            nums1[pos--]=nums2[second--];
        }
    }
};