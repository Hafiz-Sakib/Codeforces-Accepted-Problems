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
    ll n, r = 0;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        while (n > 0)
        {
            r = n % 10;
            n = n / 10;

            if (r != 4 || r != 7)
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
