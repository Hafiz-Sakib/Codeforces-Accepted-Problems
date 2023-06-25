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
    vi zero, one;
    int ok = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            zero.push_back(0);
            if (zero.size() >= 6)
            {
                ok = 1;
                break;
            }
        }
        else
        {
            zero.clear();
        }
        if (s[i] == '1' && s[i + 1] == '1')
        {
            one.push_back(0);
            if (one.size() >= 6)
            {
                ok = 1;
                break;
            }
        }
        else
        {
            one.clear();
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
