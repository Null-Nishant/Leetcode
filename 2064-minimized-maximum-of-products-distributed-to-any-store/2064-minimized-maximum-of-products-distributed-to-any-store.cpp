class Solution {
public:
    bool helper(int q, vector<int>& arr, int shops) {
        if(q==0) return true;
        int shopCount = 0;
        for (int i = 0; i < arr.size(); i++) {
            shopCount += arr[i] / q;
            if (arr[i] % q != 0) {
                shopCount++;
            }
            if (shopCount > shops) {
                return false;
            }
        }

        return shopCount <= shops;
    }
    int minimizedMaximum(int n, vector<int>& arr) {
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (helper(mid, arr, n)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
