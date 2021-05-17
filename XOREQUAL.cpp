#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define mod 1000000007
typedef long long int ll;
int power(ll x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        ans = power(2, n - 1, mod);
        cout << ans << endl;
    }
    return 0;
}