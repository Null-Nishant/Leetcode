class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0;
        int left = 0, right = height.size() - 1;
        int leftmax = -1;
        int rightmax = -1;
        while (left <= right) {
            if (height[left] <= height[right]) {
                leftmax = max(leftmax, height[left]);
                sum += leftmax - height[left];
                left++;
            } else {
                rightmax = max(rightmax, height[right]);
                sum += rightmax - height[right];
                right--;
            }
        }
        return sum;
    }
};