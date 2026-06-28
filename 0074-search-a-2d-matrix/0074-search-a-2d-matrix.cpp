class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0,high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(mat[mid][0]<=target)low=mid+1;
            else high=mid-1;
        }
        int x = high;
        if(x<0)return false;
        low =0,high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(mat[x][mid]==target)return true;
            else if(mat[x][mid]>target)high = mid-1;
            else low=mid+1;
        }
        return false;
    }
};