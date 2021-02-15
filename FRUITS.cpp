#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
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
        int n, m, k, x, maxf, minf, ans;
        cin >> n >> m >> k;
        minf = min(n, m);
        maxf = max(n, m);
        ans = maxf - min(minf + k, maxf);
        cout << ans << endl;
    }
    return 0;
}