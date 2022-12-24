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

bool isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n < 4)
    {
        return 1;
    }
    if (!(n % 2) || !(n % 3))
    {
        return 0;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (!(n % i) || !(n % (i + 2)))
        {
            return 0;
        }
    }
    return 1;
}
void Boom()
{
    int n;
    cin >> n;
    if (!isPrime(n + 2))
        cout << 2 << endl;
    else
        cout << "3\n";
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
