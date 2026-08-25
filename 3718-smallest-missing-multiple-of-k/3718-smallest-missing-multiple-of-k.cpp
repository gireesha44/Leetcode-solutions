class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
        int i=1;
        for(i=1;i<=n;i++){
            if(i%k==0 && mp.find(i)==mp.end()){
                return i;
            }
        }
        while(i%k!=0 || mp.find(i)!=mp.end()){
            i++;
        }
        return i;
    }
};