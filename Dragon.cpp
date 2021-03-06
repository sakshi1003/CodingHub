#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
     while(t--)
     {
         ll x;
         int n,m;
         cin>>x>>n>>m;

            if(x<=20)
            {
               while(m-- && x>0)
             {
                 x = x-10;
             }
            }
        else{
             while(n-- )
             {
                 x = x/2 +10;
             }
             while(m-- && x>0)
             {
                 x = x-10;
             }
        }
             if(x>0)
                cout<<"NO"<<endl;
             else
                cout<<"YES"<<endl;

     }
}
