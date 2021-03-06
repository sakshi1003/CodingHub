#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;

    ll arr[n];

    for(int i=0; i<n;i++)
        cin>>arr[i];

    binary_search
}
vector<vector<int> > Solution::generateMatrix(int A) {

    vector<vector<int>> v(A,vector<int>(A,0));


    int r=0,n=A-1,l=0,m=A-1;

    // r is for starting row
    //n is for ending row
    //l is for starting column
    //m is for ending column

    int i=1;
    while(i<=A*A)
    {
        for(int j = l ; j<=m ; j++, i++)
        {
            v[r][j]=i;
        }
        r++;
        for(int j = r;j<=n;j++,i++)
        {
            v[j][m]=i;

        }m--;

        if(r<=n)
        {
            for(int j=m;j>=l;j--,i++)
            {
                v[n][j]=i;

            }
            n--;

        }

        if(l<=m)
        {
            for(int j =n;j>=r;j--,i++)
            {
                v[l][j]=i;
            }
            l++;
        }
    }
    return v;
}
