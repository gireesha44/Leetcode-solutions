class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = -1;
        for(int i=n-1;i>=0;i--){
            int maxi = nums[0];
            for(int j=0;j<=i;j++){
                maxi = max(maxi,nums[j]);
            }
            int mini = nums[n-1];
            for(int x=i;x<n;x++){
                mini = min(mini,nums[x]);
            }
            if(maxi-mini<=k)ans = i;
        }
        return ans;
    }
};