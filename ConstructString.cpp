#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,a,b;

        cin>>n>>a>>b;

        char arr[n+1];

        for(int i=0; i<n;)
        {
            for(int k=97;k<(97+b)&&i<n;k++,i++)
            {
                arr[i]=k;
            }
        }

       for(int i=0;i<n;i++)
        cout<<arr[i];
       cout<<endl;


    }
}
