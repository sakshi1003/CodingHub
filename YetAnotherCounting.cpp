#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int a,b,q;
        cin>>a>>b>>q;

        int great= max(a,b);
        int mult=a*b;
        for(int i=1;i<=q;i++)
        {
            int l,r,multi=mult;
            cin>>l>>r;
            if(r<great)
            {
                cout<<0<<" ";
            }
            else{
            int sum=r-l+1;
          //  for(int j=1;multi<l;j++)
                multi=0;
            while(multi>=l && multi<=r)
            {
                if(multi+great <r && multi+great>=l)
                {
                    sum = sum - great;
                }
                else if(multi+great>=l){
                    sum = sum - r + multi;
                }
                multi = multi + mult;

            }
            cout<<sum<<" ";
            }
        }
        cout<<endl;
    }

}
