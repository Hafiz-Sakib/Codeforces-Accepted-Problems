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
    ll n, k;
    cin >> n >> k;

    vector<ll> p(n);
    vector<ll> q(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (ll i = 0; i < n; i++)
    {
        pq.push({q[i], p[i]});
    }

    ll res = k;

    while (k > 0 && !pq.empty())
    {
        while (!pq.empty() && pq.top().second <= res)
        {
            pq.pop();
        }

        k -= pq.top().first;
        res += k;
    }

    if (!pq.empty())
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
