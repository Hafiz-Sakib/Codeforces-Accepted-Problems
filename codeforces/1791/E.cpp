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
    ll n, cnt = 0, sum = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        v.push_back(abs(a[i]));
        if (a[i] < 0)
        {
            cnt++;
        }
        sum += abs(a[i]);
    }
    sort(v.begin(), v.end());
    if (cnt & 1)
    {
        cout << sum - 2 * v[0] << endl;
    }
    else
    {
        cout << sum << endl;
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