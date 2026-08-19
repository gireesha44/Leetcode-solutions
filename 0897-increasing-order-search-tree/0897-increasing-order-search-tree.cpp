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
    TreeNode* dummy = new TreeNode(0);
    TreeNode* newRoot = dummy;
    void inorder(TreeNode* root){
        if(root==NULL)return ;
        inorder(root->left);
        TreeNode* newNode = new TreeNode(root->val);
        newRoot->right = newNode;
        newRoot = newRoot->right;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return dummy->right;
    }
};