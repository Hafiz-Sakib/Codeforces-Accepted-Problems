/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll = long long;
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = n;
        string s = to_string(x);
        if (n < 10)
        {
            cout << n << endl;
        }
        else if (n >= 10 && n < 100)
        {
            cout << 9 + (n / 10) << endl;
        }
        else if (n >= 100 && n < 1000)
        {
            cout << 18 + (n / 100) << endl;
        }
        else if (n >= 1000 && n < 10000)
        {
            cout << 27 + (n / 1000) << endl;
        }
        else if (n >= 10000 && n < 100000)
        {
            cout << 36 + (n / 10000) << endl;
        }
        else if (n >= 100000 && n < 1000000)
        {
            cout << 45 + (n / 100000) << endl;
        }
    }

    return 0;
}
