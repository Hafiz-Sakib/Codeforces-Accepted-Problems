#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, result, tstcase, i;
    scanf("%d", &tstcase);
    for (i = 1; i <= tstcase; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if ((a + b) == c || (a + c) == b || (b + c) == a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}