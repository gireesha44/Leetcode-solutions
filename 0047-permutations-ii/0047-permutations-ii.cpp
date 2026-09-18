class Solution {
public:
    void generate(vector<vector<int>>&ans,vector<int>&nums,vector<bool>&visited,vector<int>&temp){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return ; 
        }
        for(int i=0;i<nums.size();i++){
            if(visited[i])continue;
            if(i>0 && nums[i]==nums[i-1] && !visited[i-1])continue;

            visited[i] = true;
            temp.push_back(nums[i]);
            generate(ans,nums,visited,temp);
            temp.pop_back();
            visited[i] = false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>visited(n,false);
        sort(nums.begin(),nums.end());
        generate(ans,nums,visited,temp);
        return ans;
    }
};