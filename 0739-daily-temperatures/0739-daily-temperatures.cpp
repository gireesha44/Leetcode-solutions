class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,0);
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=arr[i]){
                st.pop();
            }
            if(!st.empty())ans[i] = st.top().second-i;
            st.push({arr[i],i});
        }
        return ans;
    }
};