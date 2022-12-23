

#include <bits/stdc++.h>

#define ll                                                              long long
#define pi                                                              3.14159
#define endl                                                            "\n"
#define fixed(n)                                                        cout << fixed << setprecision(n)
#define all(vec)                                                        vec.begin(), vec.end()
#define Num_of_Digits(n)                                                ((int)log10(n)+1)
#define sz(x)                                                           (int)x.size()

using namespace std;

void KIRULLOS_WALLED(){
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}

void SOLVE (){  
  int n = 0;                                                               cin >> n;
  
  while (n--){
    int a, b;                                                              cin >> a >> b;
    if (a != b) {cout << "Happy Alex";return;}
  }
  cout << "Poor Alex";
}

int main(){  
  KIRULLOS_WALLED();
  int testcase = 1;                                                         //cin >> testcase;

  while(testcase--){
    SOLVE();
  }
  return 0;
}