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
        string st;
        cin >> st;
        int flag1 = 1, flag2 = 1;
        if (st[0] != st[1] && st.length() > 2)
        {
            for (int i = 2; i < st.length(); i += 2)
            {
                if (st[0] != st[i])
                {
                    flag1 = 0;
                    break;
                }
            }
            for (int i = 3; i < st.length(); i += 2)
            {
                if (st[1] != st[i])
                {
                    flag2 = 0;
                    break;
                }
            }
            if (flag1 == 1 && flag2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}