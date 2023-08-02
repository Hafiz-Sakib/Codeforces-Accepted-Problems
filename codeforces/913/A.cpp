// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int BinaryExponentiation(int p)
{
    int b = 2, ans = 1;
    while (p)
    {
        if (p & 1)
        {
            ans = (ans * 1LL * b);
        }
        b = (b * 1LL * b);
        p >>= 1;
    }
    return ans;
}

void Boom()
{
    int n, m;
    cin >> n >> m;
    cout << ((n >= 27) ? m : m % BinaryExponentiation(n)) << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
