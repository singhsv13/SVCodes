#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int k, count = 0, s = 0;
        long int n, i;
        scanf("%ld %lld", &n, &k);
        long long int q[n], sum = 0;
        for (i = 0; i < n; i++)
            scanf("%lld", &q[i]);
        sum = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (q[i] - k > 0)
            {
                q[i + 1] = q[i + 1] + (q[i] - k);
                q[i] = k;
            }
            else
                q[i] = q[i] - k;
        }
        for (i = 0; i < n; i++)
        {
            if (q[i] < 0)
            {
                sum = i + 1;
                break;
            }
        }
        i = 0;
        if (sum == 0)
        {
            if (n == 1)
            {
                sum = (q[i] / k) + 1;
                printf("%lld\n", sum);
            }
            else
            {
                sum = (q[n - 1] / k) + n;
                printf("%lld\n", sum);
            }
        }
        else
            printf("%lld\n", sum);
    }
    return 0;
}
