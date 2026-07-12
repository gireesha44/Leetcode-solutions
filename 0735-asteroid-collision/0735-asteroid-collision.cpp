class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty())st.push(arr[i]);
            else if(st.top()<0 && arr[i]<0)st.push(arr[i]);
            else if(arr[i]>0)st.push(arr[i]);
            else if(arr[i]<0 && st.top()>0){
                if(st.top()==abs(arr[i]))st.pop();
                else if(st.top()<abs(arr[i])){
                    while(!st.empty() && st.top()>0 && st.top()<abs(arr[i]))
                        st.pop();
                    if(st.empty() || st.top()<0)
                        st.push(arr[i]);
                    else if(st.top()==abs(arr[i]))
                        st.pop();
                }
            }

        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};