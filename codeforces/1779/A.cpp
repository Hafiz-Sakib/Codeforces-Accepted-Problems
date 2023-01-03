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
    ll l = 0;
    cin >> l;
    string s = "";
    cin >> s;
    int r = 0;
    for (auto u : s)
    {
        if (u == 'R')
        {
            r++;
        }
    }
    if (r == 0 || r == l)
    {
        cout << -1 << endl;
        return;
    }

    for (ll i = 0; i < l - 1; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'R')
        {
            cout << i + 1 << endl;
            return;
        }
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            cout << 0 << endl;
            return;
        }
    }
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
