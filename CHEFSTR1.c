#include <stdio.h>
#define L 1000000
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, s[L];
        long diff = 0, sum = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &s[i]);
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                if (s[i] > s[i + 1])
                    diff = s[i] - s[i + 1] - 1;
                else
                    diff = s[i + 1] - s[i] - 1;
                sum += diff;
            }
        }
        printf("%ld\n", sum);
    }
    return 0;
}