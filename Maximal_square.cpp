int dp[301][301];
    int n,m;
    int rec(int i,int j,vector<vector<char>> &grid)
    {
        if(i<0 || j<0)
            return 0;
        if(i==0 && j==0)
        {
            if(grid[i][j]=='0')
                return 0;
            return 1;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(grid[i][j]=='0')
            return dp[i][j]=0;
        return dp[i][j]=1+min(rec(i-1,j-1,grid),min(rec(i-1,j,grid),rec(i,j-1,grid)));
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[i][j]=-1;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,rec(i,j,matrix));
            }
        }
        return ans*ans;
    }
