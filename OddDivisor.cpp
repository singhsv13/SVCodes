#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
    ll N;
    cin >> N;
    while (N % 2 == 0)
        N /= 2;
    cout << (N > 1 ? "YES" : "NO") << "\n";
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}
