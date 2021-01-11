#include <stdio.h>
int main()
{
    int n, i, j, a[100], k, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j + 1] > a[j])
                {
                    k = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = k;
                }
            }
        }
        int b1 = 0, b2 = 0;
        for (i = 0; i < n; i++)
        {
            if (b1 < b2)
                b1 += a[i];
            else
                b2 += a[i];
        }
        if (b1 > b2)
            printf("\n%d", b1);
        else
            printf("\n%d", b2);
    }
}
