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

    ll x, y;
    cin >> x >> y;
    if ((x >= 0 && y >= 0) || (x <= 0 && y <= 0))
    {
        if (y > 0)
        {
            cout << "0 " << y + x << " " << y + x << " 0" << endl;
        }
        else
        {
            cout << x + y << " 0"
                 << " 0 " << y + x << endl;
        }
    }
    else
    {
        if (y >= 0)
        {

            cout << x - y << " 0"
                 << " 0 " << y - x << endl;
        }
        if (y < 0)
        {
            cout << "0 " << y - x << " " << x - y << " 0" << endl;
        }
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
