#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;

	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;

	    int count=0;

	    int x=a%10;
	    int y=b%10;

	    if(x!=y)
	    {
	        count++;
	        a=a/10;
	        a=a*10+y;
	    }
	    int z=(a>b)?a-b:b-a;

	    count =count+ z/10;

	    cout<<count<<endl;
	}
	return 0;
}
