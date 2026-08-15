class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xori = 0,cnt=0;
        for(int i=0;i<n;i++){
            xori^=nums[i];
            if(nums[i]==0)cnt++;
        }
        if(xori==0){
            if(cnt==n)return 0;
            else return n-1;
        }
        return n;
    }
};