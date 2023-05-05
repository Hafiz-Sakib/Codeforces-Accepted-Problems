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
typedef vector<string> vs;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
#define setp(n) fixed << setprecision(n)

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    string s;
    cin >> s;

    int n = s.size();

    if (count(all(s), s[0]) == n)
    {
        yes;
        return;
    }

    set<char> st;
    int mn_gap = INT_MAX;
    map<char, int> last;

    for (char c = 'a'; c <= 'z'; c++)
    {
        last[c] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        char c = s[i];

        if (last[c] == -1)
        {
            last[c] = i;
        }
        else
        {
            mn_gap = min(mn_gap, i - last[c] - 1);
            last[c] = i;
        }

        st.insert(c);
    }

    int chars = st.size();

    (mn_gap < n && mn_gap + 1 < chars) ? no : yes;
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
