#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int isEven (ll n)
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n;
	    cin>>k;
	    if(isEven(n))
	    {
	        if(isEven(k) && k*k<=n)
	            cout<<"YES"<<endl;

	       else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        if(!isEven(k) && k*k<=n)
	            cout<<"YES"<<endl;

	       else
	            cout<<"NO"<<endl;
	    }

	}
	return 0;
}
