class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int maxi=INT_MIN,sec_maxi = INT_MIN,mini=INT_MAX,sec_mini = INT_MAX;
        int ind1=  -1,ind2=-1;
        for(int i=0;i<n;i++){
            if(maxi<arr[i]){
                ind1 = i;
                maxi = arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(sec_maxi<arr[i] && i!=ind1){
                sec_maxi = arr[i];
            }
        }
        return (maxi-1)*(sec_maxi-1);
    }
};