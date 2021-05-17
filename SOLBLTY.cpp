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
        int ans, x, a, b;
        cin >> x >> a >> b;
        if ((30 <= x <= 40) && (100 <= a <= 120) && (0 <= b <= 5))
            ans = a + (100 - x) * b;
        cout << ans * 10 << endl;
    }
    return 0;
}