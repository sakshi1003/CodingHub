#include <bits/stdc++.h>
#define ll long long int
using namespace std;

/* int isEven (ll n)
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}*/

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a;
	    cin>>b;

	    if(a<=b)
	    {
	        cout<<(b-a)<<endl;
	    }
	    else
	    {
	        if((a-b)%b == 0)
                cout<<0<<endl;

            else
	        cout<<b-((a-b)%b)<<endl;
	    }
	}
	return 0;
}
