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
    int leftMaxData(TreeNode* root)
    {
        if(!root)
            return INT_MIN;
        int left = max(leftMaxData(root->left),root->val);
        int right = max(leftMaxData(root->right),root->val);
        return max(left,right);
    }
    int rightMinData(TreeNode* root)
    {
        if(!root)
            return INT_MAX;
        int left = min(rightMinData(root->left),root->val);
        int right = min(rightMinData(root->right),root->val);
        return min(left,right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
        if(root->left)
        {
            if(root->val <= leftMaxData(root->left))
                return false;
        }
        if(root->right)
        {
            if(root->val >= rightMinData(root->right))
                return false;
        }
        return isValidBST(root->left) && isValidBST(root->right);
    }
};