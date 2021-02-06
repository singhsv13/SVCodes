#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        int n, k, x, c = 0;
        cin >> n >> k;
        vector<int> v;
        v.reserve(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.pb(x + k);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 7 == 0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}