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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty()){
            int n = q.size();
            vector<int>arr;
            for(int i=0;i<n;i++){
                TreeNode* x = q.front();
                q.pop();
                arr.push_back(x->val);
                if(x->left!=NULL)q.push(x->left);
                if(x->right!=NULL)q.push(x->right);
            }
            ans.push_back(arr);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};