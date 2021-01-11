#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, x, y, i, flag = 0, pos = 0;
        scanf("%d %d %d %d", &n, &k, &x, &y);
        i = n + 10;
        while (i--)
        {
            pos = (x + k) % n;
            if (pos > n)
            {
                x = x - n;
            }
            else
                x = pos;
            if (y == x)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}