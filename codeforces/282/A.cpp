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

    int op, x = 0;
    cin >> op;
    string statement;
    for (int i = 0; i < op; i++)
    {
        cin >> statement;
        if (statement[0] == '+' || statement[1] == '+')
            x++;
        if (statement[0] == '-' || statement[1] == '-')
            x--;
    }
    cout << x;

    return 0;
}
