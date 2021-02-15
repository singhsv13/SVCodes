#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
inline int scan()
{
    int i = 0;
    char c = 0;
    while (c < 33)
        c = getchar_unlocked();
    while (c > 33)
    {
        i = i * 10 + c - '0';
        c = getchar_unlocked();
    }
    return i;
}
int mini(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

main()
{
    int t;
    t = scan();
    while (t--)
    {
        int n, count = 0;
        n = scan();
        bool b[101];
        for (int i = 0; i < 101; i++)
            b[i] = 0;
        int temp = n;
        while (temp--)
        {
            int d;
            d = scan();
            if (b[d] == 0)
            {
                b[d] = 1;
                count++;
            }
        }
        printf("%d\n", count);
    }
}