#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        if(k==1)
        {
            cout<<1<<endl;
        }
        else
        {
            ll c=pow(2,k);

            while (c<n)
            {
                c=c*2;
            }
            if(c==n)
                cout<<1<<endl;
            else
                cout<<0<<endl;

        }

    }
}
