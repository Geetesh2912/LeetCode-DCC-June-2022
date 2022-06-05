//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/n-queens-ii/
//submission link: https://leetcode.com/submissions/detail/715140235/

//this problem is same as N queens 1, just that this problems ask for only number of possible ans and not the ans

class Solution {
public:
    int totalNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        return solve(board, 0);
    }
    
    bool isValid(vector<string>& board, int row, int col)
    {
        int n=board.size();
        for (int i=0; i<n; i++)
        {
            if (board[i][col]=='Q')
                return false;
            
            if (row-i>=0 and col-i>=0 and board[row-i][col-i]=='Q')
                return false;
            if (row-i>=0 and col+i<n and board[row-i][col+i]=='Q')
                return false;
        }
        return true;
    }
    
    int solve(vector<string>& board, int row)
    {
        int count=0;
        if (row==board.size())      //base case
            return 1;
        
        for (int col=0; col<board.size(); col++)
        {
            if (isValid(board, row, col))
            {
                board[row][col]='Q';
                count=count+solve(board, row+1);
                board[row][col]='.';
            }
        }
        return count;
    }
};
