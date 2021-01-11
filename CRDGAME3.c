#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t); //no. of test cases
    while (t--)
    {
        int n, r, min, r1, r2;
        long a, b;
        scanf("%ld %ld", &a, &b); //input
        r1 = a / 9;
        r2 = b / 9;
        if (a % 9 != 0)
            r1++;
        if (b % 9 != 0)
            r2++;
        if (r1 < r2)
            printf("%d %d\n", 0, r1);
        else
            printf("%d %d\n", 1, r2);
    }
    return 0;
}
