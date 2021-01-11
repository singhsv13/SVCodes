#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        long long int n, m, temp = 0;
        bool flag = true;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int c = 0;
        long long int suma = 0, sumb = 0;
        while (accumulate(a, a + n, suma) <= accumulate(b, b + m, sumb))
        {
            sort(a, a + n);
            sort(b, b + m, greater<int>());
            if (a[0] < b[0])
            {
                temp = a[0];
                a[0] = b[0];
                b[0] = temp;
                c++;
            }
            else
            {
                flag = false;
                cout << -1 << "\n";
                break;
            }
        }
        if (flag == true)
            cout << c << endl;
    }
    return 0;
}