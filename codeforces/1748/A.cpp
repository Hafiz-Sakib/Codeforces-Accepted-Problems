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

    int t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        if(n%2)
        {
            ans+=((n/2)*((n/2)+1))/2;
            ans+=(((n/2)+1)*((n/2)+2))/2;
        }
        else{
            ans+=((n/2)*((n/2)+1));
        }
        ll x=sqrt(ans);
        cout<<x<<endl;
    }

    return 0;

}
