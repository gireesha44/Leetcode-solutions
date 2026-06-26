class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&arr) {
        int n = arr.size();
        set<vector<int>>st;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int left = i+1,right=n-1;
            while(left<right){
                int sum = arr[i]+arr[left]+arr[right];
                if(sum==0){
                    vector<int>x={arr[i],arr[left],arr[right]};
                    sort(x.begin(),x.end());
                    st.insert(x);
                    left++;
                    right--;
                }
                else if(sum>0){
                    right--;
                }
                else left++;
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};