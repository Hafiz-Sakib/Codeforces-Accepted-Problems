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
    ll n;
    cin >> n;
    vector<ll> v;
    if (n & 1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (ll i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        for (ll i = 0; i < v.size(); i++)
        {
            swap(v[i], v[i + 1]);
            i++;
        }
        for (auto u : v)
        {
            cout << u << " ";
        }
    }
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
