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
    void solve(TreeNode* root,int ind,int height,map<int,vector<pair<int,int>>>&mp){
        if(root==NULL)return ;
        mp[ind].push_back({height,root->val});
        solve(root->left,ind-1,height+1,mp);
        solve(root->right,ind+1,height+1,mp); 
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==NULL)return {};
        map<int,vector<pair<int,int>>>mp;
        solve(root,0,0,mp);
        vector<vector<int>>ans;
        for(auto &p:mp){
            sort(p.second.begin(),p.second.end());
            vector<int>arr;
            for(auto x:p.second){
                arr.push_back(x.second);
            }
            ans.push_back(arr);
        }
        return ans;

    }
};