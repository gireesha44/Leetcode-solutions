class Solution {
public:
    int totalNumbers(vector<int>& arr){
        int n = arr.size();
        set<int>st;
        for(int i=0;i<n;i++){
            if(arr[i]==0)continue;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                for(int k=0;k<n;k++){
                    if(i==k || j==k)continue;
                    if(arr[k]%2!=0)continue;
                    int x = arr[i]*100+arr[j]*10+arr[k];
                    st.insert(x);
                }
            }
        }
        return st.size();
    }
};