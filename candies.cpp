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

        int k = 2;
        int a = pow(2,k) -1;

        while(a<=n)
        {
            if(n%a == 0)
            {
                cout<<(n/a)<<endl;
                break;
            }
            k++;
            a = pow(2,k) -1;
        }
    }
}
