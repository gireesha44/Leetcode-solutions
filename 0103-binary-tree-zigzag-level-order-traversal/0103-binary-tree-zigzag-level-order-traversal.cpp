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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int cnt = 0;
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
            if(cnt&1)reverse(arr.begin(),arr.end());
            ans.push_back(arr);
            cnt++;
        }
        return ans;
    }
};