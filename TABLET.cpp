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
        int n, b;
        ll w, h, p;
        cin >> n >> b;
        vector<ll> v;
        v.reserve(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> w >> h >> p;
            if (p <= b)
                v.pb(w * h);
        }
        if (!(v.empty()))
            cout << *(max_element(v.begin(), v.end())) << endl;
        else
            cout << "no tablet\n";
    }
    return 0;
}