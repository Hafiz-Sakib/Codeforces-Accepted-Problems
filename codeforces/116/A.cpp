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
    int exit, enter, maxi = 0, temp = 0;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> exit >> enter;
        temp -= exit;
        temp += enter;
        if (temp > maxi)
        {
            maxi = temp;
        }
    }

    cout << maxi << endl;
}

int main()
{
    Boost;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
