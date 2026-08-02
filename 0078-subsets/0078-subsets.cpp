class Solution {
public:
    void fun(vector<vector<int>>&ans,vector<int>nums,vector<int>ds,int ind){
        if(ind==nums.size()){
            ans.push_back(ds);
            return ;
        }
        ds.push_back(nums[ind]);
        fun(ans,nums,ds,ind+1);

        ds.pop_back();
        fun(ans,nums,ds,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        fun(ans,nums,ds,0);

        return ans;
    }
};