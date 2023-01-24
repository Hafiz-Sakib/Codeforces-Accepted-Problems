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
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    int ok = m[1];
    if (ok & 1)
    {
        cout << ok / 2 + n - ok + 1 << endl;
    }
    else
    {
        cout << ok / 2 + n - ok << endl;
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
