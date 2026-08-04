class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // int smallest = INT_MAX;
        // int largest = INT_MIN;
        // for (int num : nums) {
        //     largest = max(num, largest);
        //     smallest = min(num, smallest);
        // }
        // unordered_set<int> st(nums.begin(), nums.end());
        // vector<int> ans;
        // for (int i = smallest + 1; i < largest; i++) {
        //     if (st.find(i) == st.end()) {
        //         ans.push_back(i);
        //     }
        // }
        // return ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int smallest = nums[0];
        int largest = nums[n - 1];
        int index=0;
        vector<int>ans;
        for(int i=smallest;i<=largest;i++){
            if(i!=nums[index]){
                ans.push_back(i);
            }
            else{
            index++;
            }
        }
        return ans;
    }
};