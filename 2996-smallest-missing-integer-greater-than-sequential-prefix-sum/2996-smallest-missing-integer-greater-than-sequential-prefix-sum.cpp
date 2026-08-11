class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int i=0,sum=nums[0],maxi=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else break;
        }
        set<int>st(nums.begin(),nums.end());
        while(st.find(sum)!=st.end()){
            sum++;
        }
        return sum;
    }
};