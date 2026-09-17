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
    void solver(TreeNode* root, vector<int>& path, vector<vector<int>>& ans,
                int target) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right && target - root->val == 0) {
            path.push_back(root->val);
            ans.push_back(path);
            // path.pop_back();
            return;
        }
        path.push_back(root->val);
        solver(root->left, path, ans, target - root->val);
        solver(root->right, path, ans, target - root->val);
        path.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        solver(root, path, ans, targetSum);
        return ans;
    }
};