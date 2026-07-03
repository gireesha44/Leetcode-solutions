class NumMatrix {
public:
    vector<vector<int>>prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==0) return ;
        prefix = vector<vector<int>>(m+1,vector<int>(n+1,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                prefix[i][j]=matrix[i][j];
            }
        }
        int sum = 0;
        for(int i=0;i<m;i++){
            sum = 0;
            for(int j=0;j<n;j++){
                sum+=prefix[i][j];
                if(i==0){
                    prefix[i][j]=sum;
                }
                else{
                    prefix[i][j]=(sum+prefix[i-1][j]);
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int bottomRight = prefix[row2][col2];
        int topValue = (row1>0)?prefix[row1-1][col2]:0;
        int rightSide = (col1>0)?prefix[row2][col1-1]:0;
        int leftTop = (row1>0 && col1>0)?prefix[row1-1][col1-1]:0;
        return (bottomRight - topValue)-(rightSide - leftTop);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */