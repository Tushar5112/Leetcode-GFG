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
private:
    int helper(TreeNode* root,int parent)
    {
        if(!root)
        {
            return parent;
        }
        int rightsum=helper(root->right,parent);
        root->val+=rightsum;
        int leftsum=helper(root->left,root->val);
        return leftsum;
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        int ans=helper(root,0);
        return root;
    }
};