class Solution {
public:
    vector<vector<int>>ans ;
    void sumFind(int ind,vector<int>&ds,int s,int sum,vector<int>&arr,int n){
        if(s>sum)return ;
        if(ind==n){
            if(s==sum){
                vector<int>temp;
                for(int x:ds)temp.push_back(x);
                ans.push_back(temp);
            }
            return ;
        }
        ds.push_back(arr[ind]);
        s+=arr[ind];
        sumFind(ind,ds,s,sum,arr,n);

        s-=arr[ind];
        ds.pop_back();
        sumFind(ind+1,ds,s,sum,arr,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        int n = candidates.size();
        sumFind(0,ds,0,target,candidates,n);
        return ans;
    }
};