#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tst int t;cin>>t;while(t--) 
void solve(){
  ll n,k,y,x;
  cin>>n>>k;
  ll a[n], b[n+1]={0},m = 0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[i+1] += a[i]+ b[i];
    a[i] = m = max(a[i],m);
  }
  while(k--){
    cin>>x;
    y = lower_bound(a,a+n,x+1)-a;
    cout<<b[y]<<" ";
  } cout<<endl;
}
int main()
{
  tst solve();
}