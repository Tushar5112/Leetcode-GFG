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
    vector<int> ans;
    void antipreorder(TreeNode *root,int level) {
        if(root) {
            if(ans.size()==level) {
                ans.push_back(root->val);
            }
            antipreorder(root->right,level+1);
            antipreorder(root->left,level+1);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        antipreorder(root,0);
        return ans;
    }
};