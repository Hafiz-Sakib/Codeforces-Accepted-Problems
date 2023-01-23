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
    ll n, i = 1;
    cin >> n;
    vector<ll> v(7);
    for (int i = 1; i <= 7; i++)
    {
        cin >> v[i];
    }
    while (1)
    {
        n = n - v[i];
        if (n <= 0)
        {
            break;
        }
        i++;
        if (i > 7)
        {
            i = 1;
        }
    }
    cout << i << endl;
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
