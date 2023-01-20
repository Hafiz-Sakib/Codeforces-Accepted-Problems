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
    vector<ll> v;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int k = 1; k <= (n / 2); k++)
        {
            cout << i << " " << (n * n) - i + 1 << " ";
            i++;
        }
        cout << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
