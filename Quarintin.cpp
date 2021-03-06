#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int n;
    cin>>n;

    int i=1,result=12;
    while(i != n)
    {
       result = result*2 + result*5/2;
       i++;
    }
    cout<<result<<endl;
}
