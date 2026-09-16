/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& nums) {
        if (!root)
            return;
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        // inordder traversla then mearge using two pointer
        vector<int> nums1;
        vector<int> nums2;
        inorder(root1, nums1);
        inorder(root2, nums2);

        vector<int> ans;
        int first = 0, second = 0;
        while (first < nums1.size() && second < nums2.size()) {
            if (nums1[first] <= nums2[second]) {
                ans.push_back(nums1[first]);
                first++;
            } else {
                ans.push_back(nums2[second]);
                second++;
            }
        }
        while (first < nums1.size()) {
            ans.push_back(nums1[first]);
            first++;
        }
        while (second < nums2.size()) {
            ans.push_back(nums2[second]);
            second++;
        }
        return ans;
    }
};