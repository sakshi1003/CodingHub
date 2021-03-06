#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        ll x,y,z;
        x=a;
        y=b;
        z=c;
        if(x+y>c)
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else
        {
            x=b;
            y=c;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
}
