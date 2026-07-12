class Solution {
public:
    vector<int> nege(vector<int>nums){
        stack<int>st;
        int n = nums.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i])st.pop();
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prge(vector<int>nums){
        stack<int>st;
        int n = nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<nums[i])st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> nese(vector<int>nums){
        stack<int>st;
        int n = nums.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i])st.pop();
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prse(vector<int>nums){
        stack<int>st;
        int n = nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i])st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    long long subArrayRanges(vector<int>& nums) {
        int n =nums.size();
        long long minsum = 0,maxsum=0;
        vector<int>pse = prse(nums);
        vector<int>nse = nese(nums);
        vector<int>nge = nege(nums);
        vector<int>pge = prge(nums);
        for(int i=0;i<n;i++){
            minsum+=1LL*nums[i]*(i-pse[i])*(nse[i]-i);
            maxsum+=1LL*nums[i]*(i-pge[i])*(nge[i]-i);
        }
        return maxsum-minsum;
    }
};