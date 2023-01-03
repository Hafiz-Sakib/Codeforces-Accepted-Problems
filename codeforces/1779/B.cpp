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
    ll a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < a / 2; i++)
        {
            cout << "1 -1 ";
        }
        cout << endl;
    }
    else if (a == 3)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ll k = a / 2;
        for (ll i = 0; i < a / 2; i++)
        {
            cout << 1 - k << " " << k << " ";
        }
        cout << 1 - k << endl;
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
