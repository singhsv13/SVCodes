#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int a, b;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int ao = 0, ae = 0, bo = 0, be = 0, pairs = 0;
        scanf("%lld %lld", &a, &b);
        ae = a / 2;
        ao = a - ae;
        be = b / 2;
        bo = b - be;
        pairs = (ae * be) + (ao * bo);
        printf("%lld\n", pairs);
    }
    return 0;
}