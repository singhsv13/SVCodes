#include <stdio.h>

int main(void)
{
    // your code goes here
    int t, n, final;
    scanf("%d", &t);
    while (t--)
    {

        scanf("%d", &n);
        final = n * 2;
        if (n % 10 == 0)
        {
            printf("0\n");
        }
        else
        {
            if (final % 10 == 0)
            {
                printf("1\n");
            }
            else
                printf("-1\n");
        }
    }
    return 0;
}