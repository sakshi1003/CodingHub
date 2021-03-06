#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        ll a,b;
        cin>>a>>b;

        int same=0;
        int diff=0;
        if(2*a >= b)
        {
              if((x>=0&&y>=0)||(x<0&&y<0))
            {
                diff= abs(x-y)*a;
                same= min(abs(x),abs(y))*b;
                cout<<diff+same<<endl;
            }
            else //if((x>0&&y<0)||(x<0&&y>0))
            {
                diff= abs(x)+abs(y);
                cout<<diff*a<<endl;
            }
        }
        else
        {
             diff= abs(x)+abs(y);
            cout<<diff*a<<endl;
        }

    }
}
