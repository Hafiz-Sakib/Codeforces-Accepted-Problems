#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p[6];
    p[0] = a+b+c;
    p[1] = (a+b)*c;
    p[2] = a*(b+c);
    p[3] = a+b*c;
    p[4] = a*b+c;
    p[5] = a*b*c;

    int temp = p[0];

    for (int i = 1; i < 6; i++)
    {
        if (p[i] > temp)
        {
            temp = p[i];
        }
    }

    cout << temp;

return 0;
}