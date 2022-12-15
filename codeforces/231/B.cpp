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
    int n, k, m, a[105], i;
    cin >> n >> k >> m;
    for (i = 1; i <= n; i++)
    {
        if (k > 0)
            a[i] = m;
        else
            a[i] = 1;
        k = a[i] - k;
    }
    a[n] -= k;
    if (a[n] <= 0 || a[n] > m)
        cout << -1;
    else
    {
        for (i = 1; i <= n; i++)
            cout << a[i] << " ";
    }
    return 0;
}
