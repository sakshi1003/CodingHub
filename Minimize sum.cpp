#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1e9

int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    vector<ll>data;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {

        cin>>b[i];

    }
  /*  for(int i=0;i<n;i++)
    {
        data[a[i]]=i;
    }*/
    ll k;
    cin>>k;
    ll sum=0;

    int num=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=b[i])
        {
            sum = sum+a[i];
            num++;
        }
        else
        {
            sum = sum + b[i];
            data.push_back(a[i]-b[i]);
        }
    }

    if(num<k)
    {
     sort(data.begin(), data.end());
     int j=0;
     while(num<k)
     {
         sum = sum + data[j];
         j++;
         num++;
     }

    }
    cout<<sum<<endl;


   // for(int i=0;i<k;i++)

}
