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
    ll n, c1 = 0, c2 = 0;
    cin >> n;
    ll r = n / 3;
    n = n % 3;
    c1 = r;
    c2 = r;
    if (n % 3 == 2)
    {
        c2++;
    }
    else if (n % 3 == 1)
    {
        c1++;
    }
    cout << c1 << ' ' << c2 << endl;
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
