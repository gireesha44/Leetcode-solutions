class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            while(nums[i]!=mini){
                ans.push_back(mini);
                mini++;
            }
            mini++;
        }
        return ans;
    }
};