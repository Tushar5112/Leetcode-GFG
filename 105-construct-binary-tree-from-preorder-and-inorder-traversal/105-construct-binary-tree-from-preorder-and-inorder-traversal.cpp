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
int preIdx = 0;
    unordered_map<int,int> inIdx;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++) {
            inIdx[inorder[i]] = i;
        }
        return traverse(preorder, 0, preorder.size()-1);
    }
    
    TreeNode* traverse(vector<int>& pre, int left, int right) {
        if (left > right) return NULL;
        int val = pre[preIdx++];
        TreeNode* root = new TreeNode(val);
        root->left = traverse(pre, left, inIdx[val]-1);
        root->right = traverse(pre, inIdx[val]+1, right);
        return root;
    }
};