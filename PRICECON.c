#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    if (T >= 1 && T <= 100)
    {
        while (T--)
        {
            int N, i, K, sum = 0, nsum = 0, diff = 0;
            scanf("%d%d", &N, &K);
            if (N >= 1 && N <= 10000 && K >= 1 && K <= 1000)
            {
                int P[N];
                for (i = 0; i < N; i++)
                {
                    scanf("%d", &P[i]);
                    if (P[i] < 1 || P[i] > 1000)
                        exit(1);
                }
                for (i = 0; i < N; i++)
                {
                    sum += P[i];
                    if (P[i] > K)
                        nsum += K;
                    else
                        nsum += P[i];
                }
                diff = sum - nsum;
                printf("%d\n", diff);
            }
        }
    }
    return 0;
}
