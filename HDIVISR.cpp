#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, div = 0;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        if (n % i == 0)
            div = max(div, i);
    }
    cout << div << endl;
    return 0;
}
