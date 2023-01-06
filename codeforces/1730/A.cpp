#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef long long ll;
typedef vector<ll> vll;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define foreach(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define SIZE(v) (int)v.size()
#define SORT(v) sort(all(v))
#define REVERSE(v) reverse(all(v))
#define PERMUTE next_permutation
#define TC(t) while (t--)

int nxt() {
    int x;
    cin >> x;
    return x;
}

char nxtc() {
    char x;
    cin >> x;
    return x;
}

void solve(){
    int n = nxt(), c = nxt();
    vector<int> a(n);
    generate(all(a), nxt);
    sort(all(a));
    int ret = 0;
    int cur = INT_MAX;
    int curCount = 0;
    for(auto i : a){
        if(i != cur){
            ret += min(c, curCount);
            cur = i;
            curCount = 1;
        }else{
            curCount++;
        }
    }
    ret += min(c, curCount);
    cout << ret << '\n';
}

int main(){
    int t = nxt();
    while(t--) solve();
}