#include <stdio.h>
int SOD(int n);
int main(void)
{
    int t;
    scanf("%d", &t); //no. of test cases
    while (t--)
    {
        int n, c = 0, m = 0, i, r;
        long a, b, s1 = 0, s2 = 0;
        scanf("%d", &n); //no. of rounds
        for (i = 1; i <= n; i++)
        {
            scanf("%ld", &a); //chef
            scanf("%ld", &b); //morty
            s1 = 0;
            s2 = 0;
            s1 = SOD(a);
            s2 = SOD(b);
            if (s1 > s2)
                c++;
            else if (s2 > s1)
                m++;
            else
            {
                c++;
                m++;
            }
        }
        if (c > m)
            printf("%d %d\n", 0, c);
        else if (m > c)
            printf("%d %d\n", 1, m);
        else
            printf("%d %d\n", 2, c);
    }
    return 0;
}
int SOD(int x)
{
    int sum = 0;
    if (x != 0)
    {
        sum += (x % 10) + SOD(x / 10);
    }
    return sum;
}
