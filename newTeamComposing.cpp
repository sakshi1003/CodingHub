#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll demo[n+1]={0};
        int dist=0;
        for(int i=0; i<n;i++)
           {
             cin>>arr[i];
            if( demo[arr[i]] == 0 )
            {
                dist++;
            }
            demo[arr[i]]++;
           }

           sort(demo,demo+(n+1));


       if(demo[n]< dist)
            cout<<demo[n]<<endl;
       else if(demo[n]== dist)
            cout<<demo[n]-1<<endl;
       else if(demo[n]> dist)
            cout<<dist<<endl;




    }
    return 0;
}
