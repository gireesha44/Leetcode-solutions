class Solution {
public:
    vector<int> nseOfArr(vector<int>arr){
        int n = arr.size();
        vector<int>ans(n,n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty())ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> pseOfArr(vector<int>arr){
        int n = arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty())ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nse = nseOfArr(heights);
        vector<int>pse = pseOfArr(heights);
        int maxi=0;
        for(int i=0;i<n;i++){
            int width =nse[i]-pse[i]-1;
            maxi=max(maxi,width*heights[i]);
        }
        return maxi;
    }
};