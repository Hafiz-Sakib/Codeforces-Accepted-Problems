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

    int t = 1;
    cin >> t;
    while (t--)
    {
        vector<long long int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int mini = *min_element(v.begin(), v.end());
        sort(v.begin(), v.end());
        long long int sum = 0;
        for (auto u : v)
        {
            if (u > mini)
            {
                int k = u - mini;
                sum += k;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
