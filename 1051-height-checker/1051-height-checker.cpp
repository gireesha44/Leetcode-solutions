class Solution {
public:
    int heightChecker(vector<int>& arr) {
        int n = arr.size();
        vector<int>exp=arr;
        int ans = 0;
        sort(exp.begin(),exp.end());
        for(int i=0;i<n;i++){
            if(exp[i]!=arr[i])ans++;
        }
        return ans;
    }
};