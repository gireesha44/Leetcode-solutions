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
    void preorder(TreeNode* root,vector<TreeNode*>&ans){
        if(root==NULL)return ;
        ans.push_back(root);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)return ;
        vector<TreeNode*>ans;
        preorder(root,ans);
        TreeNode* x = root;
        for(int i=0;i<ans.size();i++){
            x->left=NULL;
            x->right = ans[i];
            x=x->right;
        }
        x->left=NULL;
        x->right=NULL;
    }
};