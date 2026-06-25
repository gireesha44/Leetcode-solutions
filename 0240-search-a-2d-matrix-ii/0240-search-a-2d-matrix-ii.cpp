class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size();
        int n = arr[0].size();
        int row = 0,col = n-1;
        while(row<m && col>=0){
            if(arr[row][col]==target)return true;
            else if(arr[row][col]>target){
                col--;
            }
            else row++;
        }
        return false;
    }
};