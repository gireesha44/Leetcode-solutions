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
    int maxi = INT_MIN;
    int solve(TreeNode* root){
        if(root==NULL)return 0;
        int leftMaxSum = max(0,solve(root->left));
        int rightMaxSum = max(0,solve(root->right));

        int currPathSum = root->val+leftMaxSum+rightMaxSum;
        maxi = max(maxi,currPathSum);

        return root->val+max(leftMaxSum,rightMaxSum);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
    }
};