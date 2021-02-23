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
        int n;
        string fn, ln;
        cin >> n;
        cin.ignore();
        vector<string> v, v1;
        for (int i = 1; i <= n; i++)
        {
            cin >> fn >> ln;
            v.pb(fn);
            v1.pb(ln);
        }
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[i] == v[j])
                    c++;
            }
            if (c > 1)
                cout << v[i] << " " << v1[i] << endl;
            else
                cout << v[i] << endl;
        }
    }
    return 0;
}