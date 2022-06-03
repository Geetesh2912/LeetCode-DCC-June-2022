
****************************************************************************
//to better understand the prefix sum matrix overlaps see this -> https://computersciencesource.wordpress.com/2010/09/03/computer-vision-the-integral-image/
****************************************************************************


//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/range-sum-query-2d-immutable/
//submission link: https://leetcode.com/submissions/detail/713500935/

class NumMatrix {
public:
    vector<vector<int>> prefixSum;
    
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        prefixSum = vector<vector<int>> (m+1, vector<int> (n+1,0));     //we are keeping a extra row and column to avoid checking out of bound each time
        
        for (int i=1; i<=m; i++)
        {
            for (int j=1; j<=n; j++)
            {
                prefixSum[i][j]= matrix[i-1][j-1] + prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2+1][col2+1] - prefixSum[row2+1][col1] - prefixSum[row1][col2+1] + prefixSum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
