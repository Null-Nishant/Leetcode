/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(string subans,vector<string>&ans,TreeNode* root){
            if(!root){
                return ;
            }
            if(!root->left && !root->right){
                subans+=to_string(root->val);
                ans.push_back(subans);
                return;
            }
            subans+=to_string(root->val)+"->";
            helper(subans,ans,root->left);
             helper(subans,ans,root->right);
            return ;
        }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {};
        vector<string>ans;
        string subans="";
        helper(subans,ans,root);
        return ans;
    }
};