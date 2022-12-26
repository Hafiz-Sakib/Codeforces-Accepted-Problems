/**
Shashank Reddy
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define fr(i, l, r) for(int i = int(l); i<int(r); ++i)
#define sz(a) int((a.size()))
#define mod 998244353
#define MOD 1e9+7
#define INF 1000000000000000000
void solve()
{
   string s;
   cin>>s;
   int n = s.length();
   int dp[n] = {0};
   if(s[0]=='0' || s[0]=='4' || s[0]=='8') dp[0]++;
   for(int i=1; i<n; ++i)
   {
     if(((s[i-1]-48)*10+(s[i]-48))%4==0 && (s[i]-48)%4==0)
     {
        dp[i] = dp[i-1] + (i+1);
     }
     else if(((s[i-1]-48)*10+(s[i]-48))%4==0)
     {
        dp[i] = dp[i-1] + (i);
     }
     else if((s[i]-48)%4==0)
     {
        dp[i] += dp[i-1]+1;
     }
     else
     {
        dp[i] = dp[i-1];
     }
   }
   cout<<dp[n-1]<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
    int tc=1; //cin>>tc;
    for(int i=1; i<=tc; ++i)
    {
        solve();
    }
}