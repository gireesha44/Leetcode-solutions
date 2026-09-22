class Solution {
public:
    int minCostToMoveChips(vector<int>& arr) {
        int n = arr.size();
        int odd = 0,even =0 ;
        for(int i=0;i<n;i++){
            if(arr[i]&1)odd++;
            else even++;
        }
        return min(odd,even);
    }
};