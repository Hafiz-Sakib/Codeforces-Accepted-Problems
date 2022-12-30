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
    ll n, m;
    cin >> n >> m;
    vector<ll> vn(n);
    vector<ll> vm(m);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        pq.push(p);
    }
    for (ll i = 0; i < m; i++)
    {
        ll k;
        cin >> k;
        pq.pop();
        pq.push(k);
    }
    ll sum = 0;
    while (!pq.empty())
    {
        sum += pq.top() * 1LL;
        pq.pop();
    }
    cout << sum << endl;
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
