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
    int n, h, x, z;
    cin >> n >> h >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> a;
    a.reserve(n);
    for (int i = 0; i < n; i++)
    {
        cin >> z;
        a.pb(z);
    }
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] + x >= h)
        {
            f = true;
            break;
        }
    }
    if (f == true)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}