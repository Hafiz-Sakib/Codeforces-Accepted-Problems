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

    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll maxi = v[0], mini = v[0], cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] > maxi)
        {
            maxi = v[i];
            cnt++;
        }
        if (v[i] < mini)
        {
            mini = v[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    Boost;

    int t = 1;
    //- cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
