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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll way = 0;
    ll sum = accumulate(v.begin(), v.end(), 0);

    if (sum & 1)
    {
        for (ll i = 0; i < n; i++)
        {
            if (v[i] & 1)
            {
                way++;
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (v[i] & 1)
            {
                continue;
            }
            else
            {
                way++;
            }
        }
    }
    cout << way << endl;
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
