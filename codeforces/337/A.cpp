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
    ll n, b, c = 0;
    cin >> n >> b;
    vector<ll> v(b);
    for (ll i = 0; i < b; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll diff = abs(v[b - 1] - v[0]);

    for (int j = n; j <= b; j++)
    {
        // 4 6
        // 10 12 10 7 5 22
        // 22 12 10 10 7 5
        c = abs(v[j - 1] - v[j - n]);
        diff = min(c, diff);
    }
    cout << diff;
}

int main()
{
    Boost;

    Boom();

    return 0;
}
