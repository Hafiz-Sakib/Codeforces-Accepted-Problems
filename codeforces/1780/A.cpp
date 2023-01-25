/*

string auth||;
auth|| = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ign || e cin.ign || e(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    int n, i, j;
    cin >> n;
    vector<ll> odd, even;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        if (j & 1)
        {
            odd.push_back(i + 1);
        }
        else
        {
            even.push_back(i + 1);
        }
    }
    if (odd.size() >= 3 || (odd.size() >= 1 && even.size() >= 2))
    {
        cout << "YES" << endl;
        if (odd.size() >= 3)
        {
            cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        }
        else
        {
            cout << odd[0] << " " << even[0] << " " << even[1] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
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
