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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int td = k * l;
    td = td / nl;
    int tslice = c * d;
    int tsalt = p / np;
    ll ans = min(min(td, tslice), tsalt) / n;
    cout << ans << endl;
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
