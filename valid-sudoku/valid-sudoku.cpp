class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false},col[9][9]={false},grid[9][9]={false};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                        continue;
                int temp1=board[i][j]-'0'-1;
                int temp2=i/3*3+j/3;
                if(row[i][temp1]==true || col[j][temp1]==true || grid[temp2][temp1]==true)
                        return false;
                row[i][temp1]=col[j][temp1]=grid[temp2][temp1]=true;
            }
        }
        return true;
    }
};