// https://codeforces.com/contest/151/problem/C 
  
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
  
 bitset<mx> is_prime; 
 vector<int> primes; 
  
 void Sieve(int n) 
 { 
     for (int i = 3; i <= n; i += 2) 
     { 
         is_prime[i] = 1; 
     } 
  
     for (int i = 3; (i * i) <= n; i += 2) 
     { 
         if (is_prime[i]) 
         { 
             for (int j = (i * i); j <= n; j += (i + i)) 
             { 
                 is_prime[j] = 0; 
             } 
         } 
     } 
  
     is_prime[1] = 0; 
     is_prime[2] = 1; 
     primes.push_back(2); 
  
     for (int i = 3; i <= n; i += 2) 
     { 
         if (is_prime[i]) 
         { 
             primes.push_back(i); 
         } 
     } 
 } 
  
 void Boom() 
 { 
     long long int x = -1, i, q; 
     cin >> q; 
  
     for (i = 2; i < mx; i++) 
     { 
         if (q % i == 0) 
         { 
             if (x != -1) 
             { 
                 if (q / i == 1LL) 
                 { 
                     printf("2\n"); 
                     return; 
                 } 
                 else 
                 { 
                     cout << "1\n" 
                          << x * i << "\n"; 
                     return; 
                 } 
             } 
             else 
             { 
                 if (q / i == 1LL) 
                 { 
                     cout << "1\n0\n"; 
                     return; 
                 } 
             } 
             x = i; 
             q /= i; 
             i--; 
         } 
     } 
     if (x == -1) 
     { 
         cout << "1\n0\n"; 
     } 
     else 
     { 
         printf("2\n"); 
     } 
 } 
  
 int main() 
 { 
     Boost; 
  
     int t = 1; 
     while (t--) 
     { 
         Boom(); 
     } 
  
     return 0; 
 }