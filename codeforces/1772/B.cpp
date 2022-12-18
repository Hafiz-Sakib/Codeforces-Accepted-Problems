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
    ll a[2][2];
    for (ll i = 0; i < 2; i++)
    {
        for (ll k = 0; k < 2; k++)
        {
            cin >> a[i][k];
        }
    }
    bool f = true;

    for (ll i = 0; i < 4; i++)
    {
        if (a[0][0] < a[1][0] &&
            a[0][0] < a[0][1] &&
            a[0][1] > a[0][0] &&
            a[0][1] < a[1][1] &&
            a[1][0] < a[1][1])
        {
            f = false;
            break;
        }

        ll p = a[0][0];
        a[0][0] = a[1][0];
        a[1][0] = a[1][1];
        a[1][1] = a[0][1];
        a[0][1] = p;
    }

    if (f)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
