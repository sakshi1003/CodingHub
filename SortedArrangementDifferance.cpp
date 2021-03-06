#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);


        ll j,k=n-1;
        ll result[n];
        result[k]= arr[0];
        result[--k]=arr[n-1];

        for(i=1,j=n-2;i<=j;i++,j--)
        {
            if(i!=j)
            {
                k--;
                result[k]=arr[i];
                result[--k] = arr[j];
            }
            else{
                k--;
                result[k]=arr[i];
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<result[i]<<" ";

        }
        cout<<endl;

    }
    return 0;
}
