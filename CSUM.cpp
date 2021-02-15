#include <bits/stdc++.h>
#define syc                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;

int main()
{
    // your code goes here
    syc int t;
    cin >> t;
    while (t--)
    {
        int n, k, c = 0, i, j;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] + a[j] > k)
            {
                j--;
            }
            else if (a[i] + a[j] < k)
            {
                i++;
            }

            else
            {
                c = 1;
                break;
            }
        }

        cout << (c ? "Yes\n" : "No\n");
    }
    return 0;
}
