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
    void solve(TreeNode* root,int target,int sum,vector<int>arr,vector<vector<int>>&ans){
        if(root==NULL)return ;
        if(root->left==NULL && root->right==NULL){
            if(sum+root->val==target){
                arr.push_back(root->val);
                ans.push_back(arr);
            }
            return ;
        }
        arr.push_back(root->val);
        solve(root->left,target,sum+root->val,arr,ans);
        solve(root->right,target,sum+root->val,arr,ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>arr;
        solve(root,targetSum,0,arr,ans);
        return ans;
    }
};