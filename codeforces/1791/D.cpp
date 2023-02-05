/*

 sing author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define ignore cin.ignore(numeric_limits<seamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
void Boom()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vvi cnt(n, vi(26, 0));
    for (int i = 0; i < n; i++)

    {
        if (i)
        {
            cnt[i] = cnt[i - 1];
        }
        cnt[i][s[i] - 'a']++;
    }

    vi sum = cnt.back();
    int ans = 0;
    for (int i = 0; i < n - 1; i++)

    {
        vi tmp = sum;
        for (int j = 0; j < 26; j++)
        {
            tmp[j] -= cnt[i][j];
        }
        int crnt = 0;
        for (int j = 0; j < 26; j++)

        {
            if (cnt[i][j])
            {
                crnt++;
            }
            if (tmp[j])
            {
                crnt++;
            }
        }
        ans = max(ans, crnt);
    }
    cout << ans << endl;
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