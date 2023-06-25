#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    string s;
    cin >> s;
    int c = 0, ok = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            if (c >= 6)
            {
                ok = 1;
                break;
            }
            c = 0;
        }
    }
    ok ? yes : no;
}

int main()
{
    Boost;
    int t = 1;
    while (t--)
    {
        Boom();
    }

    return 0;
}
