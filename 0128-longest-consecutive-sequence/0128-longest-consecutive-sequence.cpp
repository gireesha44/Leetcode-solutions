class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int ans = 0;
        for(auto it:st){
            int cnt = 1;
            if(st.find(it+1)==st.end()){
                int x = it;
                while(st.find(x-1)!=st.end()){
                    x--;
                    cnt++;
                }
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};