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

    ll t, alice = 0, bob = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        ll z = 0, n = s.size();

        for (char c : s)
        {
            z += c - 'a' + 1;
        }

        if (!(n & 1))
        {
            cout << "Alice " << z << endl;
        }
        else
        {
            if (n == 1)
            {
                cout << "Bob " << z << endl;
            }
            else
            {
                z -= 2 * min(s[0] - 'a' + 1, s[n - 1] - 'a' + 1);
                cout << "Alice " << z << endl;
            }
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
