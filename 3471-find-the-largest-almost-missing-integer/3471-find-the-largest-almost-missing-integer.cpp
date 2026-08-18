class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        if(k==n)return *max_element(nums.begin(),nums.end());
        if(k==1){
            int maxi = -1;
            for(int i=0;i<n;i++){
                if(mp[nums[i]]==1)maxi=max(maxi,nums[i]);
            }
            return maxi;
        }
        int maxi =-1;
        if(nums[0]==nums[n-1])return -1;
        if(mp[nums[0]]==1 && mp[nums[n-1]]==1)maxi = max(nums[0],nums[n-1]);
        if(mp[nums[0]]==1 && mp[nums[n-1]]>1)maxi= nums[0];
        if(mp[nums[n-1]]==1 && mp[nums[0]]>1)maxi= nums[n-1];
        return maxi;
    }
};