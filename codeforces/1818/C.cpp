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

#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')

#define def(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, q;
    cin >> n >> q;
    vi v(n + 1, 0), p(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1];
        if (i - 2 > 0 and v[i - 2] >= v[i - 1] && v[i - 1] >= v[i])
        {
            p[i]++;
        }
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll sz = r - l + 1;
        if (sz < 3)
        {
            cout << sz << endl;
            continue;
        }
        ll f = p[r] - p[l - 1];
        for (int i = l; i <= l + 1; i++)
        {
            if (i - 2 > 0 and v[i - 2] >= v[i - 1] && v[i - 1] >= v[i])
            {
                f--;
            }
        }
        cout << abs(sz - f) << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
