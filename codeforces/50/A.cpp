/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
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
    int x, res, y;
    cin >> x >> y;

    if ((x * y) % 2 == 0)
    {
        y = (x * y) / 2;
        cout << y;
    }
    else
    {
        y = ((x * y) - 1) / 2;
        cout << y;
    }

    return 0;
}
