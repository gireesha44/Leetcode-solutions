class Solution {
public:
    void fun(vector<vector<int>>&ans,vector<int>arr,int n,int k,vector<int>ds,int sum,int ind){
        if(sum>n)return;
        if(ds.size()==k){
            if(sum==n)ans.push_back(ds);
            return ;
        }
        if(ind==9)return ;
        ds.push_back(arr[ind]);
        fun(ans,arr,n,k,ds,sum+arr[ind],ind+1);

        ds.pop_back();
        fun(ans,arr,n,k,ds,sum,ind+1);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(k>n)return {};
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>arr = {1,2,3,4,5,6,7,8,9};
        fun(ans,arr,n,k,ds,0,0);
        return ans;
    }
};