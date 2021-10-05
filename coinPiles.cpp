#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

    ll n;
    cin>>n;
    ll res=0;
    
    while(n--)
    {
        ll u,v;
        cin>>u>>v;
        if(u<v)
        swap(u,v);
        if(u>2*v)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            u%=3;
            v%=3;
            if(u<v)
            swap(u,v);
            if((u==2 && v==1) || (u==0 && v==0))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }

    

    
        
}