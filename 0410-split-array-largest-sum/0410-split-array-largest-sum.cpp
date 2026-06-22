class Solution {
public:
    bool canSplit(vector<int>arr,int mid,int k){
        int sum = 0,cnt =1;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                sum = arr[i];
                cnt++;
            }
        }
        return cnt>k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(),nums.end()),high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            if(canSplit(nums,mid,k)){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};