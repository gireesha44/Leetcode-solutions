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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)return 1;
        int maxi = INT_MIN,ans=1;
        queue<TreeNode*>q;
        q.push(root);
        int cnt =1;
        while(!q.empty()){
            int sum = 0,n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* x = q.front();
                q.pop();
                sum+=x->val;
                if(x->left!=NULL)q.push(x->left);
                if(x->right!=NULL)q.push(x->right);
            }
            if(maxi<sum){
                maxi = sum;
                ans=cnt;
            }
            cnt++;
        }
        return ans;
    }
};