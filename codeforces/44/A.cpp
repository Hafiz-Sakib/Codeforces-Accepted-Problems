#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int
#define cY cout << "YES\n"
#define cN cout << "NO\n"
#define cy cout << "Yes\n"
#define cn cout << "No\n"
#define space ' '
#define newline "\n"
#define read3         \
    long int a, b, c; \
    cin >> a >> b >> c;
#define read2      \
    long int a, b; \
    cin >> a >> b;
#define read1   \
    long int a; \
    cin >> a;
#define write1 cout << a << newline;
#define write2 cout << a << newline << b << newline;
#define write3 cout << a << newline << b << newline << c << newline;
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
int main()
{
    Boost;
    int n;
    cin >> n;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    int size = unique(v.begin(), v.end()) - v.begin();
    cout << size << endl;

    /*  for (auto u : v)
     {
         cout << u.first << " " << u.second << endl;
         ;
     } */

    return 0;
}