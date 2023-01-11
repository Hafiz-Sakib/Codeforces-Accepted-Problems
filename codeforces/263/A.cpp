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
    ll row[10], col[10];
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            ll x;
            cin >> x;
            row[x] = i;
            col[x] = j;
        }
    }
    ll count = abs(2 - col[1]) + abs(2 - row[1]);
    cout << count << endl;
}

int main()
{
    Boost;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
