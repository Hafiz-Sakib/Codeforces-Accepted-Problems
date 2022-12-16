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

float distance(int a1, int b1, int a2, int b2)
{
    return sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2) * 1.0);
}

void Boom()
{
    ll a1, a2, b1, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    if ((a1 > a2 && a1 < a3) ||
        (a1 > a3 && a1 < a2) ||
        (a2 > a1 && a2 < a3) ||
        (a2 > a3 && a2 < a1) ||
        (a3 > a1 && a3 < a2) ||
        (a3 > a2 && a3 < a1) ||
        (b1 > b2 && b1 < b3) ||
        (b1 > b3 && b1 < b2) ||
        (b2 > b1 && b2 < b3) ||
        (b2 > b3 && b2 < b1) ||
        (b3 > b1 && b3 < b2) ||
        (b3 > b2 && b3 < b1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
