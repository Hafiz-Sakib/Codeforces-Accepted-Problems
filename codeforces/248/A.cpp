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
    ll n, cnt = 0;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    vector<ll> left;
    vector<ll> right;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        // v[i] = make_pair(a,b);
        // v[i] ={a,b};
    }
    for (ll i = 0; i < n; i++)
    {
        left.push_back(v[i].first);
        right.push_back(v[i].second);
    }
    ll z = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        if (left[i] == 0)
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    ll leftMini = min(z, o);

    z = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        if (right[i] == 0)
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    ll rightMini = min(z, o);

    cout << leftMini + rightMini << endl;
}

int main()
{
    Boost;

    int t = 1;
    //  cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
