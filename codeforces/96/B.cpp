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
 #define mod 1000000007 
 const int mx = 1e8 + 123; 
 const double eps = 1e-12; 
  
 #define debug(x) cerr << x << endl; 
 #define here fprintf(stderr, "====I am Here====\n"); 
  
 #define Boost                         \ 
     ios_base::sync_with_stdio(false); \ 
     cin.tie(NULL);                    \ 
     cout.tie(NULL) 
  
 vector<ll> lucky; 
  
 void make_lucky(ll n) 
 { 
     if (n > 44444444444) 
     { 
         return; 
     } 
     lucky.push_back(n); 
     make_lucky(n * 10 + 4); 
     make_lucky(n * 10 + 7); 
 } 
  
 bool cnt(ll n) 
 { 
     int f = 0, s = 0; 
     while (n > 0) 
     { 
         f += (n % 10 == 4); 
         s += (n % 10 == 7); 
         n /= 10; 
     } 
     return (s == f); 
 } 
  
 int main() 
 { 
     make_lucky(0); 
     sort(all(lucky)); 
     ll n; 
     cin >> n; 
  
     for (int i = 1; i < lucky.size(); i++) 
     { 
         if (cnt(lucky[i]) && lucky[i] >= n) 
         { 
             return cout << lucky[i], 0; 
         } 
     } 
  
     return 0; 
 }