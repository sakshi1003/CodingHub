#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int flag=0;
        int p1=0,c1=0,p2=0,c2=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>p2>>c2;
            if(p2-p1 < c2-c1)
                flag=1;
            if(c2>p2 || p2<p1 || c2<c1)
                flag=1;
            p1=p2;
            c1=c2;
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
