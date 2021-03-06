#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll arr[n];
        for(int i=0; i<n ; i++)
        {
            cin>>arr[i];
        }
        int i=0;
        ll minimum=INT_MIN,maximum=0;
        ll sum=0;

        while(i<n)
        {
            if(arr[i]<0)
            {
                for(;arr[i]<0 &&i<n;i++)
                {
                    if(arr[i]>minimum)
                    {
                        minimum= arr[i];
                    }
                }
                sum = sum + minimum;
                minimum =INT_MIN;
            }
            if(arr[i]>0)
            {
                for(;arr[i]>0 &&i<n;i++)
                {
                    if(arr[i]>maximum)
                    {
                        maximum = arr[i];
                    }
                }
                sum = sum + maximum;
                maximum = 0;
            }

        }
        cout<<sum<<endl;
    }
}
