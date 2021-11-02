class Solution {
public:
    int count=1,res=0;
    int uniquePathsIII(vector<vector<int>>& grid) {
        int x,y;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    x=i; y=j;
                } else if(grid[i][j]==0) count++;
            }
        }
        helper(grid,x,y,0);
        return res;
    }
    void helper(vector<vector<int>> grid,int i,int j,int visited){
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]==-1) return;
        if(grid[i][j]==2&&visited==count)
            res++;
        grid[i][j]=-1;
        helper(grid,i+1,j,visited+1);
        helper(grid,i-1,j,visited+1);
        helper(grid,i,j+1,visited+1);
        helper(grid,i,j-1,visited+1);
        grid[i][j]=0;
    }
};