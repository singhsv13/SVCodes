#include <iostream>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], s = 0, j = 0, l = 0, x = n - k;
        for (int i = 0; i < n; i++)
        {
            if ((j < k && s <= 1) || (l >= x))
            {
                s += i + 1;
                a[i] = i + 1;
            }
            else
            {
                s -= i + 1;
                a[i] = -i - 1;
            }
            if (s > 0)
                j++;
            else
                l++;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    return 0;
}