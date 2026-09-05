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
    int solver(TreeNode* root, int &ans) {
        if (!root)
            return 0;
        int leftSum = max(0, solver(root->left, ans));
        int rightSum = max(0, solver(root->right, ans));
        int sum = root->val + leftSum + rightSum;
        int path=root->val+max(leftSum,rightSum);
        ans = max(ans, sum);
        return path;
    }
    int maxPathSum(TreeNode* root) {
        int path = INT_MIN;
        solver(root, path);
        return path;
    }
};