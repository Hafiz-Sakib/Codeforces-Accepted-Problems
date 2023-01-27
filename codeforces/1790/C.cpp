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
    int n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(n - 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> v[i][j];
        }
    }
    ll x = -1, y = -1;
    for (ll i = 0; i < n; i++)
    {
        ll f = 0;
        for (ll k = 0; k < n; k++)
        {
            if (i == k)
            {
                continue;
            }
            if (v[i][1] == v[k][0])
            {
                x = i;
                y = k;
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            break;
        }
    }
    cout << v[x][0] << ' ';
    for (ll i = 0; i < n - 1; i++)
    {
        cout << v[y][i] << ' ';
    }
    cout << endl;
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
