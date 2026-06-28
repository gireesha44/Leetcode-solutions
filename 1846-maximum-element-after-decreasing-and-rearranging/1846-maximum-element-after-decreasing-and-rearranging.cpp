class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        int ind =1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]>=ind){
                arr[i]=ind;
                ind++;
            }
        }
        return ind-1;
    }
};