class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans= 0,cnt =0;
        int i=0,j=0;
        unordered_map<int,int>mp;
        while(j<n){
            cnt+=mp[nums[j]];
            mp[nums[j]]++;
            while(cnt>=k){
                ans+=(n-j);
                mp[nums[i]]--;
                cnt-=mp[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};