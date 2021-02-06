//FLATLAND
#include <bits/stdc++.h>
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
        int n, x = 0, r, s = 0;
        cin >> n;
        while (n > 0)
        {
            s++;
            x = sqrt(n);
            r = n - (x * x);
            n = r;
        }
        cout << s << endl;
    }
    return 0;
}