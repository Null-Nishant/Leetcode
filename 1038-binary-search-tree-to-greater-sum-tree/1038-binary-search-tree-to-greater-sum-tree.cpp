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
    void solver(TreeNode* root, int& temp) {
        if (!root)
            return;
        solver(root->right, temp);
        root->val = root->val + temp;
        temp = root->val;
        solver(root->left, temp);
    }
    TreeNode* bstToGst(TreeNode* root) {
        if (!root)
            return root;
        int temp=0;
        solver(root, temp);
        return root;
    }
};