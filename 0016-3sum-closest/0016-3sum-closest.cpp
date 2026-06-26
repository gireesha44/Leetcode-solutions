class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int mini = INT_MAX,ans= 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int left = i+1,right=n-1,diff=0,sum=0;
            while(left<right){
                sum = nums[i]+nums[left]+nums[right];
                if(sum>target){
                    right--;
                }
                else left++;
                diff = abs(target-sum);
                if(mini>diff){
                    mini = diff;
                    ans = sum;
                }
            }
        }
        return ans;
    }
};