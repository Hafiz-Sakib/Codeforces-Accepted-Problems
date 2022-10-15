// Author: rK.
#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#define debug(...)
#else
#include <d2x/dy2.h>  
#endif
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

// DS
#define ll long long
#define ld long double
#define ar array
#define vt vector
#define f first
#define s second
#define nl '\n'
#define sz(x) (ll)(x).size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define bk back
#define ppb pop_back
#define here() debug(__LINE__)
#define mem0(x) memset(x, 0, sizeof(x))
#define mem1(x) memset(x, -1, sizeof(x))
#define ppc(x) __builtin_popcount(x)
#define ppcll(x) __builtin_popcountll(x)

// CONST
const int mod = 1e9+7; // 998244353
const int inf_32 = 1e9;
const ll inf = 1e18;
const ld pi = acos(-1);
const int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};
const int Dx[8] = {-1,-1,-1,0,0,1,1,1}, Dy[8] = {-1,0,1,-1,1,-1,0,1};

string to_string(char c) { return string(1, c); }
string to_string(bool b) { return b ? "true" : "false"; }
string to_string(const char* s) { return string(s); }
template<size_t S> string to_string(bitset<S> b) { string res; for(int i = 0; i < S; i++) res+=char('0'+b[i]); return res; }
template<typename T,typename T1>T chmax(T &a,T1 b){ if(b>a)a=b; return a; }
template<typename T,typename T1>T chmin(T &a,T1 b){ if(b<a)a=b; return a; }


// MODULAR
ll add(ll a, ll b, ll Mod = mod) { return (a % Mod + b % Mod + Mod) % Mod; }
ll sub(ll a, ll b, ll Mod = mod) { return (a % Mod - b % Mod + Mod) % Mod; }
ll mul(ll a, ll b, ll Mod = mod) {return ((a % Mod) * ( b % Mod) + Mod) % Mod; }
ll exp(ll a, ll b, ll Mod = mod){ ll res = 1; while(b) {if (b & 1) res = mul(res, a); a = mul(a, a); b >>= 1; } return res; }
ll inv(ll x, ll Mod = mod) { return exp(x, Mod - 2); }
ll Div(ll a, ll b, ll Mod = mod) { return mul(a, (ll) inv(b)); }

// Advanced DS
// s.order_of_key(k) => returns index of key
// s.find_by_order(i) => returns iterator to the ith key
// template<class T> using ordered_set = tree<T, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>;  
// template<class T> using ordered_multiset = tree<T, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>;  
// template<class T, class U> using ordered_map = tree<T, U,less<int>, rb_tree_tag,tree_order_statistics_node_update>;  
// template<class T, class U> using ordered_multimap = tree<T, U,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>;

// ---------------- CODE BEGIN ----------------

const ll N = 2e5+5;



// #define SINGLE_TEST
void solve(){
    ll n = 8;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool red = 0;
    for(int i = 0; i < n; i++)
    {
        bool isRed = true;
        for(int j = 0; j < n; j++)
        {
            if(v[i][j] == 'B' || v[i][j] == '.'){
                isRed = false;
            }
        }

        if(isRed){
            red = isRed;
        }
    }

    if(red){
        cout << "R" << nl;
        return;
    }
    else{
        cout << "B" << nl;
    }
}

int32_t main(){
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    cout.setf(ios::fixed);
    cout.precision(10);
    ll T=1;

#ifndef SINGLE_TEST
    cin >> T;
#endif

#ifdef SIEVE
    calc_sieve();
#endif

#ifdef NCR
    calc_fact();
#endif

    while(T--){
        solve();
    }
    return 0;
}