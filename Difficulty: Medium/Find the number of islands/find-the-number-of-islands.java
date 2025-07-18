class Solution {
    void DFS(char[][] grid, int i, int j, int r, int c)
    {
        if(i==r || j==c || i<0 || j<0 || grid[i][j] == 'W')
            return;
        grid[i][j] = 'W';
        DFS(grid, i, j+1, r, c);
        DFS(grid, i-1, j, r, c);
        DFS(grid, i, j-1, r, c);
        DFS(grid, i+1, j, r, c);
        DFS(grid, i-1, j+1, r, c);
        DFS(grid, i+1, j+1, r, c);
        DFS(grid, i+1, j-1, r, c);
        DFS(grid, i-1, j-1, r, c);
    }
    public int countIslands(char[][] grid) {
        // Code here
        int r = grid.length;
        int c = grid[0].length;
        int ans = 0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j] == 'L')
                {
                    DFS(grid, i, j, r, c);
                    ans++;
                }
            }
        }
        return ans;
    }
}