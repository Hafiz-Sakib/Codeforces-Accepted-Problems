// https://codeforces.com/contest/149/problem/B

#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;
long long k, i, maxi, r, j, p, sum, sum1;
string s;
bool flag1, flag;
int main()
{
    cin >> s;
    maxi = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            k = (s[i] - 'A' + 10);
        else if (s[i] != ':')
            k = (s[i] - '0');
        if (k > maxi)
            maxi = k;
    }
    r = max((long long)2, maxi + 1);
    i = 500;
    p = 1;
    for (j = s.find(":") - 1; j >= 0; j--)
    {
        if (s[j] >= 'A' && s[j] <= 'Z')
            sum += (s[j] - 'A' + 10) * p;
        else
            sum += (s[j] - '0') * p;
        p *= i;
    }
    p = 1;
    for (j = s.length() - 1; j > s.find(":"); j--)
    {
        if (s[j] >= 'A' && s[j] <= 'Z')
            sum1 += (s[j] - 'A' + 10) * p;
        else
            sum1 += (s[j] - '0') * p;
        p *= i;
    }
    if (sum < 24 && sum1 < 60)
    {
        flag1 = true;
    }
    if (flag1)
        cout << -1;
    else
    {
        for (i = r; i <= 100; i++)
        {
            p = 1;
            sum = 0;
            for (j = s.find(":") - 1; j >= 0; j--)
            {
                if (s[j] >= 'A' && s[j] <= 'Z')
                    sum += (s[j] - 'A' + 10) * p;
                else
                    sum += (s[j] - '0') * p;
                p *= i;
            }
            p = 1;
            sum1 = 0;
            for (j = s.length() - 1; j > s.find(":"); j--)
            {
                if (s[j] >= 'A' && s[j] <= 'Z')
                    sum1 += (s[j] - 'A' + 10) * p;
                else
                    sum1 += (s[j] - '0') * p;
                p *= i;
            }
            if (sum < 24 && sum1 < 60)
            {
                cout << i << ' ';
                flag = true;
            }
        }

        if (!flag)
            cout << 0;
    }
    // cin>>sum;
    return 0;
}