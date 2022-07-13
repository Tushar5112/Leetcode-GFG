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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        
        vector<vector<int>> n;
        vector<vector<TreeNode*>> v;
        TreeNode* temp=root;
        int i=0;
        
        v.push_back(vector<TreeNode*>());
        n.push_back(vector<int>());
        v[i].push_back(temp);
        n[i].push_back(temp->val);
            
            while(v[i].size()){
                v.push_back(vector<TreeNode*>());
                n.push_back(vector<int>());
                
            for(int j=0; j<v[i].size();j++){
                
               temp = v[i][j];
                
                if(temp->left){v[i+1].push_back(temp->left); n[i+1].push_back(temp->left->val);}
                
                if(temp->right){v[i+1].push_back(temp->right); n[i+1].push_back(temp->right->val);} 
    
            }
            
            i++;
            
            }
        
        auto it = n.rbegin();
        if((*it).size()==0) n.pop_back();

        return n;
    }
};