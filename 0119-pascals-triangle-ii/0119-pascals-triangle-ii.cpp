class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>ans;
        long res = 1;
        ans.push_back(1);
        for(int r=1;r<=n;r++){
            res = 1;
            for(int i=0;i<r;i++){
                res = res*(n-i);
                res = res/(i+1);
            }
            ans.push_back(res);
        }
        return ans;
    }
};