#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define mod 1000000007
typedef long long int ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, c = 0;
        cin >> x >> y;
        vector<ll> v(x + 1, 1);
        for (ll i = 2; i <= x; i++)
        {
            ll a = y % i;
            c += v[a];
            for (ll j = a; j <= x; j += i)
                v[j]++;
        }
        cout << c << endl;
    }
    return 0;
}