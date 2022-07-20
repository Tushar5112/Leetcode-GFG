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
    int ans=0;
public:
    int inorder(TreeNode* root,int low,int high) {
        if(!root){
            return ans;
        }
        inorder(root->left,low,high);
        if(root->val>=low && root->val<=high) {
            ans+=(root->val);
        }
        inorder(root->right,low,high);
        return ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        ans=inorder(root,low,high);
        return ans;
    }
};