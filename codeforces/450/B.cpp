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

long long m=1e9+7;
ll mod(ll n)
{
    return ((n%m)+m)%m;
}

int main()
{
    Boost;

    int x,y,n;
    cin>>x>>y;
    cin>>n;
    vector<int> v;
    v.push_back(mod(x-y));
    v.push_back(mod(x));
    for(int i=2;i<6;i++)
    {
        v.push_back(mod(v[i-1]-v[i-2]));
    }
    cout<<v[n%6]<<endl;
    //cout<<n%6<<endl;

    return 0;

}
