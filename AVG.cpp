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
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        int n, k, v, sum = 0, x;
        cin >> n >> k >> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        ll m = (v * (n + k) - sum) % k;
        ll q = (v * (n + k) - sum) / k;
        if (m != 0)
            cout << "-1" << endl;
        else
        {
            if (q <= 0)
            {
                cout << "-1" << endl;
            }
            else
                cout << q << endl;
        }
    }
    return 0;
}