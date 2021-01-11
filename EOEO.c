#include <stdio.h>

int main(void)
{
    int t;
    long long ts;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &ts);
        if (ts % 2 != 0)
        {
            printf("%lld\n", ts / 2);
        }
        else
        {
            while (ts % 2 == 0)
            {
                ts = ts / 2;
            }
            printf("%lld\n", ts / 2);
        }
    }
    return 0;
}