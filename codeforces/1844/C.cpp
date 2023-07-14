#include "bits/stdc++.h"

using namespace std;

#define ll long long

ll solve(vector<ll> u) {

  sort(u.begin(), u.end());

  if (!u.size()) return -1e18;

  if (u.back() < 0) return u.back();

  ll res = 0;
  while (u.size() && u.back() >= 0) {
    res += u.back();
    u.pop_back();
  }

  return res;

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t; cin >> t;
  while (t--) {

    int n; cin >> n;
    vector<ll> a(n);
    for (ll &i : a) {
      cin >> i;
    }

    vector<ll> u, v;
    for (int i = 0; i < n; i++) {
      if (i % 2) {
        u.push_back(a[i]);
      }
      else {
        v.push_back(a[i]);
      }
    }

    ll ans = max(solve(u), solve(v));

    cout << ans << "\n";

  }
  
}