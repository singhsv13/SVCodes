#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
typedef long long int ll;
#define mod 1000000007
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, sum = 0;
        cin >> a >> b >> c;
        sum = (a + 1) % c;
        if (b % c == 0 || b % c == sum)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}