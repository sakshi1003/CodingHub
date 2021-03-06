#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int xcheck (ll x, ll x1, ll x2)
{
    if(x>=x1 && x<=x2)
        return 1;

    else
        return 0;
}
int ycheck (ll y, ll y1, ll y2)
{
    if(y>=y1 && y<=y2)
        return 1;

    else
        return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c,d,x,y,x1,x2,y1,y2;
	    cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
	    if(x1==x2 && (a>0 || b>0))
        {
            cout<<"NO"<<endl;

        }

        else if(y1==y2 && (c>0 || d>0))
        {
            cout<<"NO"<<endl;

        }


	   else if(xcheck(x,x1,x2)  &&  ycheck(y,y1,y2))
	    {
	        if(xcheck(b-a+x,x1,x2) && ycheck(d-c+y,y1,y2))
	            cout<<"YES"<<endl;

	       else
	            cout<<"NO"<<endl;
	    }

	    else
	        cout<<"NO"<<endl;

	}
	return 0;
}
