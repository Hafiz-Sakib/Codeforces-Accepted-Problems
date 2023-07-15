#include "bits/stdc++.h"

using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t; cin >> t;
  while (t--) {

    int n; cin >> n;

    if (n == 1) {
      cout << "1\n";
      continue;
    }

    int tl = n / 2;
    int tr = (n - 1) - tl;

    vector<int> ans = {2};
    int cv = n;
    for (int i = 1; i < tl; i++) {
      ans.push_back(cv--);
    }
    ans.push_back(1);
    for (int i = 0; i < tr; i++) {
      ans.push_back(cv--);
    }

    for (int i : ans)
      cout << i << " ";
    cout << "\n";

  }
  
}