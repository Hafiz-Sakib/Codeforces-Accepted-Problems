#include <bits/stdc++.h>
#define ff first
#define ss second
#define sz size()
#define pb push_back
using namespace std;
typedef long long ll;
const int N = 100005;

void solve();

ll t, n, a[N], rt = 100, tr = 2, x, ans, jog;
map <ll, ll> m;

void solve () {
    m.clear();
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j) continue;
            if (a[i] == a[j]) {
                ans = 1;
                break;
            }
        }
        if (ans) break;
    }
    for (int i = 2; i <= rt; ++i) {
        jog = 1e4;
        for (int j = 1; j <= n; ++j) {
            m[a[j] % i] += 1;
        }
        for (int j = 0; j < rt; ++j) {
            if (j >= i) break;
            jog = min (jog, m[j]); 
        }
        if (jog >= 2) {
            ans = 1;
            break;
        }
        m.clear();
    }
    if (ans == 1) cout << "NO\n";
    else cout << "YES\n"; 
    ans = 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while ( t-- ) {
        cin >> n;       
        solve();
    }
}