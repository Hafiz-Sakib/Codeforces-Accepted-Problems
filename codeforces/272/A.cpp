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

    int n, s = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        s += a;
    }

    ll pos = (s % (n + 1)), cnt = 0;

    for (ll i = 0; i < 5; i++)
    {
        pos++;
        if (pos > n + 1)
        {
            pos = 1;
        }
        if (pos != 1)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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
