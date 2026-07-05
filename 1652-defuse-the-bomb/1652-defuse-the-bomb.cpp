class Solution {
public:
    vector<int> nextk(vector<int>arr,int k){
        int n = arr.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<k;j++){
                sum+=arr[(i+j+1)%n];
            }
            ans[i]=sum;
        }
        return ans;
    }
    vector<int> prevk(vector<int>arr,int k){
        int n = arr.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<abs(k);j++){
                sum+=arr[(n+k+j+i)%n];
            }
            ans[i]=sum;
        }
        return ans;
    }
    vector<int> decrypt(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>ans(n,0);
        if(k>0)ans = nextk(arr,k);
        if(k<0)ans = prevk(arr,k);
        if(k==0)return ans;
        return ans;
    }
};