#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k;
		cin>>n>>k;
		string ans(n,'a');      // everything is taken care according to the array i.e. starting with 0
		for(auto i = n-2; i >=0; --i) {
			if(k <= n-i-1) {  //n-i-1 will be 1 then 1+2 then 1+2+3 and so on
				ans[i] = 'b'; //this is the first b
				ans[n-k] = 'b'; // this is the second b
				break;
			}
			else
				k-=(n-i-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
