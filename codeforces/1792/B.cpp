/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll total = a;
    ll alice = a, bob = a;
    if (total == 0)
    {
        cout << 1 << endl;
        return;
    }
    ll mn = min(b, c);
    b -= mn, c -= mn;
    total += mn * 2ll;
    if (b)
    {
        mn = min({b, bob + 1});
        total += mn;
        bob -= mn;
        alice += mn;
    }
    else
    {
        mn = min(c, alice + 1);
        total += mn;
        alice -= mn;
        bob += mn;
    }
    mn = min(min(alice, bob) + 1, d);
    total += mn;

    cout << total << endl;
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
