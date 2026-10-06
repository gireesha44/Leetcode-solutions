class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int maxi = 0;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};