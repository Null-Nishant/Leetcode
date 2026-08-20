class Solution {
public:
//nderstand the problem in detail dont write without understanding
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        int index = 2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        while (index < n) {
            if ( arr1.back() > arr2.back()) {
                arr1.push_back(nums[index]);
            } else if ( arr1.back() < arr2.back()) {
                arr2.push_back(nums[index]);
            }
            index++;
        }
        for (int i : arr2) {
            arr1.push_back(i);
        }
        return arr1;
    }
};