class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int noofisland=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='0' || grid[i][j]=='2')
                {
                }
                else
                {
                    noofisland++;
                    maketwo(grid,i,j+1);
                    maketwo(grid,i,j-1);
                    maketwo(grid,i-1,j);
                    maketwo(grid,i+1,j);
                }
            }
        }
        return noofisland;
    }
    void maketwo(vector<vector<char>>& grid,int a,int b)
    {
        int r=grid.size();
        int c=grid[0].size();
        if(a<0 || b<0 || a>=r || b>=c)
            return;
        if(grid[a][b]=='0')
            return;
        if(grid[a][b]=='2')
            return;
        if(grid[a][b]=='1')
        {
            grid[a][b]='2';
            maketwo(grid,a,b-1);
            maketwo(grid,a,b+1);
            maketwo(grid,a-1,b);
            maketwo(grid,a+1,b);
        }
    }
};