class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int mini = INT_MAX,ans= 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum =0 ,diff=0;
                for(int k=j+1;k<n;k++){
                    sum = nums[i]+nums[j]+nums[k];
                    diff = abs(sum-target);
                    if(mini>diff){
                        mini=diff;
                        ans = sum ;
                    }
                }
            }
        }
        return ans;
    }
};