#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, l = 0, bo = 0;
        cin >> a >> b;
        int i = 1;
        while (true)
        {
            if (i % 2 == 0)
            {
                bo += i;
                if (bo > b)
                {
                    cout << "Limak\n";
                    break;
                }
            }
            else
            {
                l += i;
                if (l > a)
                {
                    cout << "Bob\n";
                    break;
                }
            }
            i++;
        }
    }
}