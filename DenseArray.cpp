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
        int n, c = 0;
        cin >> n;
        int v[n], flag = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int maxel = max(v[i], v[i + 1]);
            int minel = min(v[i], v[i + 1]);
            while (maxel > 2 * minel)
            {
                c++;
                minel *= 2;
            }
        }
        cout << c << endl;
    }
    return 0;
}