#include <stdio.h>
#include <string.h>
#define n 100000
int main(void)
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 100)
    {
        while (t--)
        {
            char s[n];
            int l, i, c = 0, sum = 0;
            scanf("%s", &s);
            l = strlen(s);
            sum += l;
            if (sum <= (3 * 100000))
            {
                if (l >= 1 && l <= 100000)
                {
                    for (i = 0; i < l; i++)
                    {
                        if (s[i] == 'x' && s[i + 1] == 'y' || s[i] == 'y' && s[i + 1] == 'x')
                        {
                            c++;
                            i++;
                        }
                    }
                }
                else
                    return 1;
            }
            else
                return 2;
            printf("%d\n", c);
        }
    }
    else
        return 3;
    return 0;
}