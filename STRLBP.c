#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while (t--)
    {
        char seq[10];
        scanf("%s", seq);
        seq[8] = seq[0];
        int i, sum = 0;
        for (i = 0; i < 8; i++)
        {
            if (seq[i] == '0' && seq[i + 1] == '1' || seq[i] == '1' && seq[i + 1] == '0')
                sum += 1;
        }
        if (sum < 3)
            printf("uniform\n");
        else
            printf("non-uniform\n");
    }

    return 0;
}