 int dp[501][501];
    int game(int i,int j,vector<int> &piles){
        if(i+1==j) return max(piles[i],piles[j]);
        if(dp[i][j]!=-1) return dp[i][j];
        int choosefromfirst = piles[i] + min(game(i+1,j-1,piles),game(i+2,j,piles));
        int choosefromlast = piles[j] + min(game(i+1,j-1,piles),game(i,j-2,piles));
        return dp[i][j] = max(choosefromfirst,choosefromlast);
    }
public:
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int totalsum = accumulate(piles.begin(),piles.end(),0);
        int aliceres = game(0,piles.size()-1,piles);
        return (totalsum-aliceres < aliceres);
    }
