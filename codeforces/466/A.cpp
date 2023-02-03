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
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m * a <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        // 5 2 2 3
        // 8
        cout << (n / m) * b + min((n % m) * a, b) << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
