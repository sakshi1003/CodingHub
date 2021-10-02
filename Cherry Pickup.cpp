#define fi first
#define se second
class Solution {
public:
    
    int dp[51][51][51];
    
     bool check(vector<vector<int>>& a,int n,int m){
        if(n<0 || m<0 || n>=a.size() || m>=a[n].size()) return 0;
        return 1;
    }
    
    int ans(vector<vector<int>>& a,pair<int,int> n,pair<int,int> m){
        if(a[n.fi][n.se]==-1 || a[m.fi][m.se]==-1) return INT_MIN;
        if(n.fi==n.se && m.fi==m.se && n.fi==m.fi && n.fi==a.size()-1){
            if(a[n.fi][m.se]==1) return 1;
            return 0;
        }
        if(dp[n.fi][n.se][m.fi]!=-1) return dp[n.fi][n.se][m.fi];
        int nrd=n.fi+1,ncd=n.se;
        int nru=n.fi,ncu=n.se+1;
        int mrd=m.fi+1,mcd=m.se;
        int mru=m.fi,mcu=m.se+1;
        int mx=INT_MIN;
        vector<pair<int,int>> v={{nrd,ncd},{nru,ncu}},x={{mrd,mcd},{mru,mcu}};
        for(int i=0;i<v.size();i++){
            if(check(a,v[i].fi,v[i].se))
            for(int j=0;j<x.size();j++){
                if(check(a,x[j].fi,x[j].se)){
                    mx=max(mx,ans(a,v[i],x[j]));
                }
            }
        }
        if(a[n.fi][n.se]==1) mx++;
        if(a[m.fi][m.se]==1) mx++;
        if(a[n.fi][n.se]==1 && n.fi==m.fi && n.se==m.se) mx--;
        return dp[n.fi][n.se][m.fi]=mx;
    }
    
    int cherryPickup(vector<vector<int>>& a) {
        memset(dp,-1,sizeof(dp));
        return max(ans(a,{0,0},{0,0}),0);
    }
};