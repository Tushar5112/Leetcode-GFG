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
    void traverse(TreeNode *root, vector<TreeNode*>&preorder) {
        if (root == NULL)
            return;
        preorder.push_back(root);
        traverse(root->left, preorder);
        traverse(root->right, preorder);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> preorder;
        traverse(root,preorder);
        TreeNode* temp=root;
        for(int i=1;i<preorder.size();i++) {
            temp->right=preorder[i];
            temp->left=NULL;
            temp=temp->right;
        }
    }
};