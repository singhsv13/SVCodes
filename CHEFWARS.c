#include <stdio.h>
int WAR(int health, int power);
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, p, res;
        scanf("%d %d", &h, &p);
        res = WAR(h, p);
        if (res == 1)
            printf("%d\n", res);
        else if (res == 0)
            printf("%d\n", res);
    }
    return 0;
}
int WAR(int health, int power)
{
    if (health <= 0)
        return 1;
    else if (power == 0)
        return 0;
    else
        WAR(health - power, power / 2);
}