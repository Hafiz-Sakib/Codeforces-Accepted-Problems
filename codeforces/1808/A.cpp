// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

#define space ' '
#define ll long long int
#define endl "\n"

#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    ll l, r, maxi = 0;
    cin >> l >> r;
    ll ans = r;
    for (ll i = r; i >= l; i--)
    {
        string s = to_string(i);
        sort(all(s));
        ll diff = abs(s.back() - s.front());
        if (diff > maxi)
        {
            maxi = diff;
            ans = i;
        }
        if (diff >= 9)
        {
            break;
        }
    }
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
