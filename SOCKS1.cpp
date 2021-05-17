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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b == c)
        cout << "Yes\n";
    else if (a == b || b == c || a == c)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}