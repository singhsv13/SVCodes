#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, c = 0, flag = 0;
        scanf("%d", &n); //no. of days passed till now.
        int b[n];
        for (i = 0; i < n; i++)
        {
            scanf("%1d", &b[i]);
            if (b[i] == 1)
                c++;
        }
        float att = 0, fatt = 0;
        att = ((float)c) / 120;
        if ((att * 100) >= 75)
            flag = 1;
        else
        {
            fatt = ((float)((120 - n) + c) / 120);
            if ((fatt * 100) >= 75)
                flag = 1;
            else
                flag = 0;
        }
        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}