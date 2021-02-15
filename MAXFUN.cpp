#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define ll long long
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll int n;
        int *MAX, *MIN;
        ll int ans = 0;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
            cin >> v[i];
        MAX = max_element(v, v + n);
        MIN = min_element(v, v + n);
        ans = (*MAX) - (*MIN);
        cout << ans * 2 << endl;
    }
    return 0;
}