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
    void count(TreeNode* root,string str,vector<string>&ans){
        if(root==NULL){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            str+=to_string(root->val);
            ans.push_back(str);
        }    
        if(root->left!=NULL)count(root->left,str+to_string(root->val)+"->",ans);
        if(root->left==NULL)count(root->left,str+to_string(root->val),ans);

        if(root->right!=NULL)count(root->right,str+to_string(root->val)+"->",ans);
        if(root->right==NULL)count(root->right,str+to_string(root->val),ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string str = "";
        count(root,str,ans);
        return ans;
    }
};