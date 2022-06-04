//author: inspired by leetcode discuss section
//question link: https://leetcode.com/problems/n-queens/
//submission link: https://leetcode.com/submissions/detail/714478019/


class Solution {
public:
    vector<vector<string>> ans;
    
    vector<vector<string>> solveNQueens(int n) {    
	    vector<string> board(n, string(n, '.'));        //empty board
	    solve(board, 0);                                // recursion function
	    return ans; 
    }
    
    bool isValid(vector<string>& board, int row, int col) 
    {
	    int n = board.size();
	    for(int i = 0; i<n; i++) 
        {
			// queen in the same column?
		    if(board[i][col] == 'Q') 
                return false;
            
		    // queen in the same diagonal (l to r)?
		    if(row-i >= 0 && col-i >= 0 && board[row-i][col-i] == 'Q') 
                return false;
		    if(row-i >= 0 && col+i < n && board[row-i][col+i] == 'Q') 
                return false;
	    }
	    return true;
    }
    
    //solve - It basically tries all possible placement of queen for the current row & recurses for it's next row
    void solve(vector<string>& board, int row) {
	// Base condition- reahing last row add to the ans 
        if(row == board.size())
        { 
		    ans.push_back(board);
		    return;
        }            
	   
        // Try placing a queen on each column for a given row. 
        // Explore next row by placing Q at each valid column for the current row
           
	    for(int col = 0; col < size(board); col++){
		    if(isValid(board, row, col)) 
            {
			    board[row][col] = 'Q';    // place Q on the valid cell
			    solve(board, row + 1);    // go to next row
			    board[row][col] = '.';    // Backtrack to get all possible solutions
		    }
        }
    }
};
