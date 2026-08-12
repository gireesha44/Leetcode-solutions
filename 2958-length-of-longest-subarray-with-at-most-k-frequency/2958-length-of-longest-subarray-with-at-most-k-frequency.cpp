class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int i=0,j=0,maxi=1;
        while(j<n){
            mp[nums[j]]++;
            while(i<n && mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};