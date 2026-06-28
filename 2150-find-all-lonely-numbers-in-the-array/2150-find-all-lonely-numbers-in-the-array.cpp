class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]-1)==mp.end() && mp.find(nums[i]+1)==mp.end() && mp[nums[i]]==1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};