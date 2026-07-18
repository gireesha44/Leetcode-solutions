class Solution {
public:
    int cal_gcd(int maxi,int mini){
        if(mini==0)return maxi;
        return cal_gcd(mini,maxi%mini);
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        int x = cal_gcd(maxi,mini);
        return x;
    }
};