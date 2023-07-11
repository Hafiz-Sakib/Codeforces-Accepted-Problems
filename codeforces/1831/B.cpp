// https://codeforces.com/contest/1831/problem/B 
  
 // Bismillahir Rahmanir Rahim 
 /* 
  
 string author; 
 author = Hafiz_Sakib; 
  
 */ 
 #include <bits/stdc++.h> 
 using namespace std; 
  
 typedef long long int ll; 
 typedef unsigned long long ull; 
  
 typedef vector<ll> vi; 
 typedef vector<double> vd; 
 typedef vector<string> vs; 
 typedef vector<char> vc; 
 typedef vector<vector<ll>> vvi; 
 typedef vector<pair<ll, ll>> vpii; 
 typedef vector<pair<string, ll>> vpsi; 
 typedef pair<ll, ll> pii; 
 typedef map<ll, ll> mii; 
 typedef map<string, ll> msi; 
 typedef set<ll> si; 
 typedef set<char> sc; 
 typedef set<string> ss; 
  
 #define pb push_back 
 #define mp make_pair 
 #define in insert 
 #define fi first 
 #define se second 
 #define space ' ' 
 #define endl "\n" 
 #define yes cout << "YES\n" 
 #define no cout << "NO\n" 
  
 #define b() begin() 
 #define e() end() 
 #define all(data) data.begin(), data.end() 
 #define rall(data) data.rbegin(), data.rend() 
 #define vecMax(data) *max_element(data.begin(), data.end()) 
 #define vecMin(data) *min_element(data.begin(), data.end()) 
 #define vecSum(data) accumulate(data.begin(), data.end(), 0) 
  
 #define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n') 
 #define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower) 
 #define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper) 
  
 #define gcd(a, b) __gcd(a, b) 
 #define lcm(a, b) ((a * b) / gcd(a, b)) 
 const int mx = 1e8 + 123; 
 #define mod 1000000007 
 const double eps = 1e-12; 
  
 #define debug(x) cerr << x << endl; 
 #define here fprintf(stderr, "====I am Here====\n"); 
  
 #define Boost                         \ 
     ios_base::sync_with_stdio(false); \ 
     cin.tie(NULL);                    \ 
     cout.tie(NULL) 
 const int N = 2e5 + 10; 
 int a[N], b[N]; 
 int res1[2 * N], res2[2 * N]; 
 int n; 
 void Boom() 
 { 
     int n; 
     cin >> n; 
     for (int i = 1; i <= n; i++) 
         cin >> a[i]; 
     for (int i = 1; i <= 2 * n; i++) 
         res1[i] = 0, res2[i] = 0; 
     for (int i = 1; i <= n; i++) 
         cin >> b[i]; 
     int ans = 0; 
     for (int i = 1; i <= n; i++) 
     { 
         int t = i; 
         while (t <= n && a[t] == a[i]) 
             t++; 
         res1[a[i]] = max(res1[a[i]], t - i); 
         i = t - 1; 
     } 
     for (int i = 1; i <= n; i++) 
     { 
         int t = i; 
         while (t <= n && b[t] == b[i]) 
             t++; 
         res2[b[i]] = max(res2[b[i]], t - i); 
         i = t - 1; 
     } 
     for (int i = 1; i <= 2 * n; i++) 
         ans = max(ans, res1[i] + res2[i]); 
     cout << ans << endl; 
 } 
  
 int main() 
 { 
     Boost; 
  
     int t = 1; 
     cin >> t; 
     while (t--) 
     { 
         Boom(); 
     } 
  
     return 0; 
 }