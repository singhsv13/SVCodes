#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, b, m, tt = 0;
        cin >> n >> b >> m;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                tt += (n / 2) * m + b;
                n -= (n / 2);
            }
            else
            {
                tt += ((n + 1) / 2) * m + b;
                n -= ((n + 1) / 2);
            }
            m = 2 * m;
        }
        cout << tt - b << endl;
    }
    return 0;
}
