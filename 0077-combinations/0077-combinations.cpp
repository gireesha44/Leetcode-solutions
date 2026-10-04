class Solution {
public:
    void backtrack(int ind,int n,int k,vector<int>arr,vector<vector<int>>&ans){
        if(arr.size()==k){
            ans.push_back(arr);
            return ;
        }
        for(int i=ind;i<=n;i++){
            arr.push_back(i);
            backtrack(i+1,n,k,arr,ans);
            arr.pop_back();  
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>arr;
        backtrack(1,n,k,arr,ans);
        return ans;
    }
};