//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/triangle/
//submission link: https://leetcode.com/submissions/detail/721129449/

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //inplace approach
        //bottom up
        for (int i=triangle.size()-2; i>=0; i--)
        {
            for (int j=0; j<triangle[i].size(); j++)
            {
                triangle[i][j]=triangle[i][j]+min(triangle[i+1][j+1], triangle[i+1][j]);
            }
        }
        return triangle[0][0];
    }
};
