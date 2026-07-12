class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]>0)st.push(arr[i]);
            else{
                while(!st.empty() && st.top()<abs(arr[i])){
                    st.pop();
                }
                if(st.empty())ans.push_back(arr[i]);
                else if(st.top()==-arr[i])st.pop();
            }
        }
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        for(int i=res.size()-1;i>=0;i--){
            ans.push_back(res[i]);
        }
        return ans;
    }
};