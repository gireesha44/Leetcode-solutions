class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i=0,j=n-1;
        int left_maxi=INT_MIN,right_maxi=INT_MIN,ans=0;
        while(i<j){
            if(arr[i]<arr[j]){
                ans = max(ans,(j-i)*(arr[i]));
                i++;
            }
            else{
                ans = max(ans,(j-i)*(arr[j]));
                j--;
            }
        }
        return ans;
    }
};