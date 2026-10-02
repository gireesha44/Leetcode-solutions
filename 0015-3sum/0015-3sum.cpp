class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        for(int i=0;i<n;i++){
            int left = i+1,right=n-1,sum=0;
                while(left<right){
                    sum = nums[i]+nums[left]+nums[right];
                    if(sum==0){
                        ans.insert({nums[i],nums[left],nums[right]});
                        left++;
                        right--;
                    }
                    else if(sum>0)right--;
                    else left++;
                }
        }
        vector<vector<int>>res(ans.begin(),ans.end());
        return res;
    }
};