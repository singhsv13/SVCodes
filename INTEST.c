// Note that this problem is for testing fast input-output.
#include <stdio.h>
int main()
{
    // Read the input n, k
    long long int n, k;
    scanf("%lld %lld", &n, &k);

    // ans denotes number of integers n divisible by k
    long long int ans = 0;

    for (int i = 0; i < n; i++)
    {
        long long int t;
        scanf("%d", &t);

        if (t % k == 0)
        {
            ans++;
        }
    }

    // Print the ans.
    printf("%lld\n", ans);

    return 0;
}
