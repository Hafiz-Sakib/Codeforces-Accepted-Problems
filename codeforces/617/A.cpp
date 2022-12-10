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

    int n, steps = 0;
    cin >> n;

    steps = n / 5;

    if (n % 5 == 0)
    {
        cout << steps << endl;
    }
    else
    {
        cout << steps + 1 << endl;
    }

    return 0;
}

