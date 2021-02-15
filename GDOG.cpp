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
        vector<int> v;
        int n, k, x;
        int rem;
        cin >> n >> k;
        rem = n - (n / k);
        v.reserve(n);
        for (int i = 1; i <= k; i++)
        {
            x = n % i;
            v.pb(x);
        }
        rem = *max_element(v.begin(), v.end());
        cout << rem << endl;
    }
    return 0;
}