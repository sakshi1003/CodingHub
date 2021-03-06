#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll fact(ll n)
{
   ll res =1;
   while(n>=2)
   {
       res = res *n;
       n--;
   }
   return res;
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        cout<<n<<endl;

       /* if(n==1)
            cout<<1<<endl;

        else{
            ll result =  fact(2*n-2);
            cout<<result<<endl;
        }*/

    }

    return 0;
}
