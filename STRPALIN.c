#include <stdio.h>
#include <string.h>
int main()
{
    int t, c, i, j;
    char str1[10001], str2[10001];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", str1);
        scanf("%s", str2);
        c = 0;
        for (i = 0; str1[i] != '\0'; i++)
        {
            for (j = 0; str2[j] != '\0'; j++)
            {
                if (str1[i] == str2[j])
                    ++c;
            }
        }
        if (c > 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
