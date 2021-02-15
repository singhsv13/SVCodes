#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define siz 1005
using namespace std;
int main()
{
    fastio
        ll n,
        i, j, t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        ll tot = r - l + 1, odd = 0, even = 0;
        odd = even = tot / 2;
        if (tot & 1)
        {
            if (r & 1)
                odd++;
            else
                even++;
        }
        if (odd & 1)
            cout << "Odd\n";
        else
            cout << "Even\n";
    }
}