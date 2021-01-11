#include <stdio.h>
int main()
{
    long long int t, i;
    scanf("%lld", &t);
    for (i = 0; i < t; i++)
    {
        long long int n, k, j, sum = 0, min = 1000000000, a;
        scanf("%lld %lld", &n, &k);
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &a);
            if (k % a == 0)
            {
                sum = k / a;
                if (sum < min)
                    min = sum;
            }
        }
        if (sum != 0)
            printf("%lld\n", k / min);
        else
            printf("-1\n");
    }
}