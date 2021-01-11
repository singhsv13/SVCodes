#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int d, safe = 0, risk = 0, days = 0;
        int n, i;
        scanf("%d %ld", &n, &d);
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
        {
            if (a[i] > 9 && a[i] < 80)
                safe++;
            else
                risk++;
        }
        if (risk % d == 0)
            days += risk / d;
        else if (risk % d != 0)
            days += (risk / d) + 1;
        if (safe % d == 0)
            days += safe / d;
        else if (safe % d != 0)
            days += (safe / d) + 1;
        printf("%ld\n", days);
    }
    return 0;
}