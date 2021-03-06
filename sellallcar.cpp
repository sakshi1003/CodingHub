#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

    const unsigned int m = 10^9+7;
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        int i;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+n);

        ll sum=0;

        ll days = 0;

        for(i=n-1; i>=0;i--)
        {
            if(arr[i]-days>=0)
            {
                sum = sum + arr[i]-days;

                days++;
            }
            else{
                exit;
            }
        }
        cout<<sum%m<<endl;

    }
    return 0;
}
