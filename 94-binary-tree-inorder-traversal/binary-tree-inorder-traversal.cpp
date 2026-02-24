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
    void post(TreeNode* r,vector<int> &ans){
        if(!r)return;
        post(r->left,ans);
        ans.push_back(r->val);
        post(r->right,ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        post(root,ans);
        return ans;
    }
};