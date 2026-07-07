class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m= mat.size();
        int n = mat[0].size();
        vector<pair<int,int>>ones;
        for(int i=0;i<m;i++){
            int one = 1;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1)one++;
            }
            ones.push_back({one,i});
        }
        sort(ones.begin(),ones.end());
        vector<int>ans;
        int cnt=0;
        for(auto &p:ones){
            ans.push_back(p.second);
            cnt++;
            if(cnt==k)break;
        }
        return ans;
    }
};