#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define db double
#define owo ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma GCC optimize("fast-math")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,avx2,mmx,fma,avx,tune=native")
#pragma comment(linker, "/stack:200000000")

using namespace std;

const long long inf = 1e18 + 6;
const int N = 1e6 + 7;
const int MAX = INT_MAX;
const int MIN = INT_MIN;

string s;
ull a[N],b[N];

void solve() {
    cin >> s;
    ull mn=INT_MAX;
    for (ull i=0;i<s.size();i++) {
        b[s[i]] = max(i + 1 - a[s[i]], b[s[i]]);
        mn=min(mn,max(b[s[i]],s.size()-i));
        a[s[i]]=i+1;
    }
    cout << mn;
}
int main() {
    owo;
    int test=1;
    // cin >> test;
    while (test--)
        solve();
    return 0;
}