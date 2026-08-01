class Solution {
public:
    void generate(vector<vector<int>>& ans, vector<int>& arr, int k, int n, int ind, vector<int>& ds, int sum){
        if(ind==n || sum>k){
            if(sum==k)ans.push_back(ds);
            return;
        }
        if(sum==k){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        generate(ans,arr,k,n,ind+1,ds,sum+arr[ind]);
        ds.pop_back();

        while(ind+1<n && arr[ind]==arr[ind+1]) {
            ind++;
        }
        generate(ans,arr,k,n,ind+1,ds,sum);
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<int>> ans;
        vector<int>ds;
        sort(arr.begin(), arr.end());
        generate(ans,arr,target,n,0,ds,0);
        return ans;
    }
};
