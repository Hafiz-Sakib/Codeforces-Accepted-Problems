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

void Boom()
{
    // Let's Move
    long long int n, k;
    scanf("%I64d %I64d", &n, &k);

    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            printf("%I64d", (2 * k) - 1);
        }
        else
        {
            k = k - n / 2;
            printf("%I64d", 2 * k);
        }
    }
    else
    {
        n++;
        if (k <= n / 2)
        {
            printf("%I64d", (2 * k) - 1);
        }
        else
        {
            k = k - n / 2;
            printf("%I64d", 2 * k);
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
