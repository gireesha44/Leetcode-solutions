class Solution {
public:
    void backtrack(vector<int>&nums,vector<vector<int>>&ans,vector<int>&arr,vector<bool>&vis){
        if(arr.size()==nums.size()){
            ans.push_back(arr);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i])continue;
            arr.push_back(nums[i]);
            vis[i] = true;
            backtrack(nums,ans,arr,vis);
            arr.pop_back();
            vis[i] = false;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        vector<vector<int>>ans;
        vector<bool>vis(n,false);
        backtrack(nums,ans,arr,vis);

        return ans;
    }
};