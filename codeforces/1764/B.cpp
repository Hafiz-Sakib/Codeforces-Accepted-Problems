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
void Boom()
{
    long long int n, i, g = 0, mx = 0;
    cin >> n;
    vector<long long int> vec(n);
    for (i = 0; i < n; i++)

    {
        cin >> vec[i];
        g = __gcd(g, vec[i]);
    }
    mx = vec[n - 1] / g;
    cout << mx << endl;
}
int main()
{
    long long int tc = 0;
    cin >> tc;
    while (tc--)
    {
        Boom();
    }
}