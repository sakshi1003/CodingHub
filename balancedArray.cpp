#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n%4 != 0)
        {
            cout<<"NO"<<endl;

        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++)
            {
                cout<<2*i<<" ";
            }
            for(int i=1;i<n/2;i++)
            {
                cout<<(2*i -1)<<" ";
            }
            cout<<(n-1+n/2)<<endl;
        }
    }
}
