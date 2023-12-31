class Solution {
public:
        bool issafe(int val,vector<vector<char>>& board,int row,int col){
            //row
            int n=board.size();
            for(int i=0;i<n;i++)
                if((board[row][i]==val)||(board[i][col]==val)||(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)])==val)
                return false;

            return true;
        }
        //return true or false base on soln found or not
        bool solve(vector<vector<char>>& board){
            int n=board.size();
            //empty cell ko fill
               for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    //check for empty cell
                    if(board[i][j]=='.')
                    {
                        for(char val='1';val<='9';val++){
                            //check for safe 
                            if(issafe(val,board,i,j)){
                                //insert
                                board[i][j]=val;
                                //bali recursion dekh lega
                                bool aage=solve(board);
                                if(aage==true)
                                return true;
                                else
                                board[i][j]='.';
                            }
                        }
                    return false;
                    }  
                }
            }
            return true;
        }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};