#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define space ' '
#define newline "\n"
int main()
{
    Boost;

    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int ans=h[0]+1;
    for(int i=0;i<n-1;i++)
    {
        if(h[i]<=h[i+1])
        {
            ans+=2+(h[i+1]-h[i]);
        }
        else
        {
            ans+=(h[i]-h[i+1])+2;
        }
    }
    cout<<ans<<endl;

    return 0;

}
