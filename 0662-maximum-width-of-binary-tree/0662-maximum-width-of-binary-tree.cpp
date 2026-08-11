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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        int maxi = 1;
        while(!q.empty()){
            int n = q.size();
            int start = q.front().second,end = q.back().second;
            maxi = max(maxi,end-start+1);
            for(int i=0;i<n;i++){
                auto it = q.front();
                q.pop();
                TreeNode* x = it.first;
                long long ind = it.second-start;
                if(x->left!=NULL){
                    q.push({x->left,2*ind+1});
                }
                if(x->right!=NULL){
                    q.push({x->right,2*ind+2});
                }
            }
        }
        return maxi;
    }
};