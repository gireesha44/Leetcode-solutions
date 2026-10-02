class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n  =arr.size();
        sort(arr.begin(),arr.end());
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left =j+1,right=n-1;
                while(left<right){
                    long long sum = (long long)arr[i]+arr[j]+arr[left]+arr[right];
                    if(sum==target){
                        vector<int>x={arr[i],arr[j],arr[left],arr[right]};
                        st.insert(x);
                        left++;
                        right--;
                    }
                    else if(sum>target)right--;
                    else left++;
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};