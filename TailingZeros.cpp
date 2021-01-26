//tailing zeros in n factorial
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int ans = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        ans += n / i;
    }
    cout << "Tailing Zero's = " << ans;
    return 0;
}