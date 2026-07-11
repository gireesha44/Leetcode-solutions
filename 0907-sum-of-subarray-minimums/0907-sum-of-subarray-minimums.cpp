class Solution {
public:
    const long long MOD = 1e9+7; 
    int sumSubarrayMins(vector<int>& nums) {
        int n = nums.size();
        vector<int>pse_ind(n,-1);
        vector<int>nse_ind(n,n);
        stack<int>st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(!st.empty()){
                pse_ind[i] = st.top();
            }    
            st.push(i);
        }
        while(!st.empty())st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>nums[i])st.pop();
            if(!st.empty()){
                nse_ind[i]= st.top();
            }
            st.push(i);
        }
        long long sum = 0;
        for(int i=0;i<n;i++){
            long long left = i-pse_ind[i];
            long long right = nse_ind[i]-i;
            long long subarrays = (left*right)%MOD;
            long long cont = (subarrays*nums[i])%MOD;
            sum=(sum+cont)%MOD;
        }
        return sum;
    }
};