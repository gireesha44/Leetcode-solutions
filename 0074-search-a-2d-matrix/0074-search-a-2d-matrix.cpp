class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0,high = m*n-1;
        while(low<=high){
            int mid = (low+high)/2;
            int val = mat[mid/n][mid%n];
            if(val==target)return true;
            else if(val>target)high = mid-1;
            else low=mid+1;
        }
        
        return false;
    }
};