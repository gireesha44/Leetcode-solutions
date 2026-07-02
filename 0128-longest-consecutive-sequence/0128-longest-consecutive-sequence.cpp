class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        if(n==1)return 1;
        unordered_set<int>st(nums.begin(),nums.end());
        int ans =1,cnt=1;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int x = it;
                cnt = 1;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                ans = max(ans,cnt);
            }

        }
        return ans;
    }
};