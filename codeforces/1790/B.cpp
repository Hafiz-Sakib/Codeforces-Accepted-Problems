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
    ll n, s, r;
    cin >> n >> s >> r;
    vector<ll> vc(n - 1), dices;
    vc.push_back(s - r);
    int f = s - r;
    for (ll i = 0; i < n - 1; i++)
    {
        vc[i] = 1;
        r = r - 1;
    }
    ll i = 0;
    while (r != 0)
    {
        if (vc[i] < f)
        {
            vc[i]++;
            r--;
        }
        else
        {
            i++;
        }
    }
    sort(vc.begin(), vc.end());
    for (auto u : vc)
    {
        cout << u << " ";
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
