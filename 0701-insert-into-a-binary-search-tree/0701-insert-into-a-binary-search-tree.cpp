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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)return new TreeNode(val);
        TreeNode* newNode = new TreeNode(val);
        TreeNode* temp = root;
        while(true){
            if(val<root->val){
                if(root->left==NULL){
                    root->left = newNode;
                    break;
                }
                root=root->left;
            }
            else{
                    if(root->right==NULL){
                        root->right = newNode;
                        break;
                    }
                    root=root->right;
            }
        }
        return temp;
    }
};