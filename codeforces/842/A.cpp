#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;


int main(){

    float l , r , x , y , k ;
    cin >> l >> r >> x >> y >> k ;
    float p = l/k, q = r/k , m = k*x, n = k*y ;
    ((((m>=l&&m<=r)||(n>=l&&n<=r))&& ceil(m) <= floor(n)) || (((p>=x&&p<=y)||(q>=x&&q<=y)) && (ceil(p) <= floor(q))))?cout <<"YES\n" : cout <<"NO\n";

return 0 ;
}



