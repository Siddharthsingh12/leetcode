class Solution {
    public int numIslands(char[][] grid) {
        boolean vis[][]=new boolean[grid.length][grid[0].length];
        int ans=0;
        for(int i=0;i<grid.length;i++)
        {
            for(int j=0;j<grid[0].length;j++)
            {
                if(vis[i][j]==false&&grid[i][j]=='1')
                {
                    DFS(grid,vis,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
    void DFS(char grid[][],boolean [][]vis,int i,int j)
    {
        if(i<0||i>=grid.length||j<0||j>=grid[0].length||grid[i][j]=='0'||vis[i][j]==true)
        {
            return;
        }
        vis[i][j]=true;
        DFS(grid,vis,i+1,j);
           DFS(grid,vis,i-1,j);
        DFS(grid,vis,i,j+1);
        DFS(grid,vis,i,j-1);
    
    }
}