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
        int n, k, x;
        cin >> n >> k;
        vector<int> v;
        v.reserve(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.pb(x);
        }
        string s = "";
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= k)
            {
                s += '1';
                k -= v[i];
            }
            else
                s += '0';
        }
        cout << s << endl;
    }
    return 0;
}