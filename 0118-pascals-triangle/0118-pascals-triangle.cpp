class Solution {
public:
    vector<vector<int>> generate(int n) {
        int x=1;
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=1;i<n;i++){
            vector<int>arr;
            arr.push_back(1);
            for(int j=0;j<i-1;j++){
                int x = ans[i-1][j]+ans[i-1][j+1];
                arr.push_back(x);
            }
            arr.push_back(1);
            ans.push_back(arr);
        }
        return ans;
    }
};