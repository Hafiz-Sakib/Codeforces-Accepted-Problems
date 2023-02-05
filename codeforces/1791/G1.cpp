#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fraction() cout.unsetf(ios::floatfield);cout.precision(10);cout.setf(ios::fixed,ios::floatfield);

void solve()
{
    ll n,c,ans=0;
    cin>>n>>c;
    priority_queue<ll> q;
    for (ll i = 1,a; i <= n; i++)
    {
        cin>>a;
        q.push(-i-a);
    }
    while(!q.empty()){
        ll x = -1*q.top();
        q.pop();
        if(x>c) break;
        ans++;
        c-=x;
    }
    cout<<ans<<endl;
        
}
int main()
{
    optimize();
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
