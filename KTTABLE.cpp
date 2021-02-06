#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
using namespace std;

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
        int n, x = 0, c = 0;
        cin >> n;
        vector<int> a, b;
        a.reserve(n);
        b.reserve(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.pb(x);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            b.pb(x);
        }
        x = 0;
        for (int i = 0; i < n; i++)
        {
            x = abs(a[i] - x);
            if (b[i] <= x)
                c++;
            x = a[i];
        }
        cout << c << endl;
    }
    return 0;
}