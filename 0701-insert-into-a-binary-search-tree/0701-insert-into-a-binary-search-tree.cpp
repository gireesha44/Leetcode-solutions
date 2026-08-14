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
    void insert(TreeNode* root,int value){
        if(root->left==NULL && root->right==NULL){//leaf node
            TreeNode* newNode = new TreeNode(value);
            if(root->val<value){
                root->right = newNode; 
            }
            else root->left=newNode;
            return ;
        }
        if(root->left==NULL){
            if(root->val>value){
                TreeNode* newNode = new TreeNode(value);
                root->left = newNode;
                return ;
            } 
        }
        if(root->right==NULL){
            if(root->val<value){
                TreeNode* newNode = new TreeNode(value);
                root->right = newNode;
                return ;
            } 
        }
        if(root->val<value){
            insert(root->right,value);
        }
        if(root->val>value){
            insert(root->left,value);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int value) {
        if(root==NULL)return new TreeNode(value);
        insert(root,value);
        return root;
    }
};