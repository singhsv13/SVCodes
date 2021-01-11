#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, coin5 = 0, coin10 = 0, flag = 0;
        scanf("%d", &n);
        int coin[n];

        for (int i = 0; i < n; i++)
            scanf("%d", coin + i);

        for (int i = 0; i < n; i++)
        {
            // printf("test %d %d %d\n", i, coin5, coin[i]);
            if (coin[i] == 5)
                coin5++;

            else if (coin[i] == 10)
            {
                coin10++;
                coin5--;
            }

            else
            {
                if (coin10 == 0)
                    coin5 = coin5 - 2;
                else
                    coin10--;
            }

            if (coin5 < 0)
            {
                // printf("WHY AM I EVEN HERE!!!");
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}