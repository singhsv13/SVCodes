#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int MIN(int x, int y);
int main(void)
{
    int d1, v1, d2, v2, p, i = 1, sum = 0, j = 1, count = 0;
    scanf("%d %d %d %d %d %d", &d1, &v1, &d2, &v2, &p);
    int t = MIN(d1, d2);
    while (1)
    {
        if (i < t && j < t)
        {
            i++;
            j++;
            count++;
        }
        else
            break;
    }
    i = d1;
    j = d2;
    while (sum < p)
    {
        if (i > j)
        {
            sum += v2;
            j++;
            count++;
        }
        else if (j > i)
        {
            sum += v1;
            i++;
            count++;
        }
        if (i == j)
        {
            sum += v1 + v2;
            i++;
            j++;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
int MIN(int x, int y)
{
    return (x <= y) ? x : y;
}
