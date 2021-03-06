#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+k);
    cout<<arr[0]<<" ";
    for(int i=1;i<=n-k;i++)
    {
        sort(arr,arr+k+i);
        cout<<arr[i]<<" ";

    }



    cout<<endl;
}
