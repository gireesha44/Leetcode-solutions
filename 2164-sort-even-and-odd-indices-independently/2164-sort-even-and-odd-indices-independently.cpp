class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<n;i+=2){
            even.push_back(nums[i]);
        }
        for(int i=1;i<n;i+=2){
            odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        int k1=0,k2=0;
        for(int i=0;i<n;i++){
            if((i&1)==0){
                nums[i] = even[k1++];
            }
            else nums[i] = odd[k2++];
        }
        return nums;
    }
};