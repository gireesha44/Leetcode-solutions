class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int ans =0;
        left[0] = 0;
        int maxi = 0;
        for(int i=1;i<n;i++){
           maxi = max(maxi,arr[i-1]);
           left[i] = maxi;
        }
        maxi =0;
        right[n-1] =0;
        for(int i=n-2;i>=0;i--){
           maxi = max(maxi,arr[i+1]);
           right[i] = maxi;
        }
        for(int i=0;i<n;i++){
            int x = min({right[i],left[i]})-arr[i];
            if(x>0)ans+=x;
        }
        return ans;
    }
};